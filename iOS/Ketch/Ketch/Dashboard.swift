//
//  Dashboard.swift
//  Ketch
//
//  Created by Connor Butler on 3/3/17.
//  Copyright © 2017 butlerproject. All rights reserved.
//
//
//  This Dashboard consists of ItemListController, MyAccount and MessageMessageController

import UIKit
import Firebase

class Dashboard: UITabBarController,
    UIPopoverPresentationControllerDelegate,
    UIAlertViewDelegate {

    override func viewDidLoad() {
        super.viewDidLoad()
        self.checkIfUserHasZipcode()

        // Do any additional setup after loading the view.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    func checkIfUserHasZipcode(){
        let ref = FIRDatabase.database().reference()
        let uid = FIRAuth.auth()?.currentUser?.uid
        FIRDatabase.database().reference().child("users").child(uid!).observeSingleEvent(of: .value, with: { (snapshot) in
            if let dictionary = snapshot.value as? [String: AnyObject]{
                let zipcode = dictionary["zipcode"] as? String
                if(zipcode == ""){
                    self.alertZipCode()
                }
            }
        }, withCancel: nil)
    }
    
    
    func setUserZipcode(){
        let popOverVC = UIStoryboard(name: "Main", bundle: nil).instantiateViewController(withIdentifier: "sbPopupID") as! PopupViewController
        self.addChildViewController(popOverVC)
        popOverVC.view.frame = self.view.frame
        self.view.addSubview(popOverVC.view)
        popOverVC.didMove(toParentViewController: self)
    }
    
    func alertZipCode() {
        let alert = UIAlertController(title: "No zip code on file.",
                                      message: "Please enter a valid 5 digit zip code.",
                                      preferredStyle: UIAlertControllerStyle.alert)
        alert.addTextField { (zipTextField) in
        }

        let zipTextField = alert.textFields?[0]
        zipTextField?.keyboardType = UIKeyboardType.numberPad
        let OKAction = UIAlertAction(title: "OK", style: UIAlertActionStyle.default) { (action:UIAlertAction!) in
            let zipCode = zipTextField?.text
            if (zipCode?.characters.count == 5){
                self.submitZipcode(zipCode: (zipCode)!)
            } else {
                self.alertZipCode()
            }
        }
        alert.addAction(OKAction)
        self.present(alert, animated: true, completion: nil)
    }
    
    
    func submitZipcode(zipCode: String) {
        let uid = FIRAuth.auth()?.currentUser?.uid
        let ref = FIRDatabase.database().reference(fromURL: "https://ketch-b8d8a.firebaseio.com/")
        //values to be put into database
        let usersReference = ref.child("users").child(uid!)
        let values = ["zipcode": zipCode]
        usersReference.updateChildValues(values, withCompletionBlock: { (err, ref) in
            if err != nil {
                print(err ?? "")
                return
            }
        })
        
    }

    

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}
