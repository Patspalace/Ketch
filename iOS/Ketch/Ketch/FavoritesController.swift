//
//  SellingPostTableController.swift
//  Ketch
//
//  Created by Patrick Carder on 3/28/17.
//  Copyright © 2017 butlerproject. All rights reserved.
//
import UIKit
import Firebase

class FavoritesController: UITableViewController {
    
    @IBOutlet var myItems: UITableView!
    
    @IBOutlet var newItemButton: UIBarButtonItem!
    let cellID = "cellID"
    
    override func viewDidLoad() {
        super.viewDidLoad()
        tableView.register(ItemCell.self, forCellReuseIdentifier: cellID)
        updateMyItems()
        navigationController?.navigationBar.barTintColor = UIColor(red: 1/255, green: 112/255, blue: 111/255, alpha: 1)
        navigationController?.navigationBar.tintColor = UIColor.white
        self.navigationController?.navigationBar.titleTextAttributes = [
            NSForegroundColorAttributeName: UIColor.white
        ]
        navigationItem.title = "My Favorites"
        
    }

    
    func handleRefresh(refreshControl: UIRefreshControl){
        DispatchQueue.main.async{
            self.tableView.reloadData()
        }
        refreshControl.endRefreshing()
    }
    
    var items = [Items] ()
    var itemsDictionary = [String: Items]()
    func updateMyItems() {
        guard let uid = FIRAuth.auth()?.currentUser?.uid else {
            return
        }
        let ref = FIRDatabase.database().reference().child("user-favorites").child(uid)
        ref.observe(.childAdded, with: { (snapshot) in
            let itemID = snapshot.key
            let itemReference = FIRDatabase.database().reference().child("items").child(itemID)
            itemReference.observe(.value, with: { (snapshot) in
                if let dictionary = snapshot.value as? [String: AnyObject]{
                    let item = Items()
                    item.setValuesForKeys(dictionary)
                    self.itemsDictionary[snapshot.key] = item
                    self.items = Array(self.itemsDictionary.values)
                    
                    
                    
                    self.timer?.invalidate()
                    self.timer = Timer.scheduledTimer(timeInterval: 0.1, target: self, selector: #selector(self.handleReloadTable), userInfo: nil, repeats: false)
                    
                    
                }
            }, withCancel: nil)
        }, withCancel: nil)
    }
    
    override func tableView(_ tableView: UITableView, heightForRowAt indexPath: IndexPath) -> CGFloat {
        return 130
    }
    
    var timer: Timer?
    
    func handleReloadTable(){
        self.items = Array(self.itemsDictionary.values)
        DispatchQueue.main.async {
            //reloads the tableView with all user's name/email *MUST call async func so the app does not crash from this thread*
            self.tableView.reloadData()
        }
    }
    
    
    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return items.count
    }
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        let item = items[indexPath.row]
        guard let itemID = item.itemID else {
            return
        }
        let ref = FIRDatabase.database().reference().child("items").child(itemID)
        
        ref.observe(.value, with: { (snapshot) in
            guard let dictionary = snapshot.value as? [String: AnyObject?] else {
                return
            }
            let itemm = Items()
            itemm.itemID = itemID
            itemm.setValuesForKeys(dictionary)
            tableView.deselectRow(at: indexPath, animated: true)
            self.showItemControllerForUser(item: itemm)
        }, withCancel: nil)
        
        
        //go to item controller
    }
    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: cellID, for: indexPath) as! ItemCell
        let item = items[indexPath.row]
        cell.item = item
        
        if let itemImageURL = item.itemImage {
            cell.profileImageView.loadImageUsingCacheWithURLString(urlString: itemImageURL)
        }
        
        return cell
    }
    
    func showItemControllerForUser(item: Items){
        let itemController = IndividualItemViewController()
        itemController.item = item
        navigationController?.pushViewController(itemController, animated: true)
    }
    
    func fetchUserAndSetupNavBarTitle(){
        
        self.navigationItem.title = "My items"
        
        
    }
    
    
}