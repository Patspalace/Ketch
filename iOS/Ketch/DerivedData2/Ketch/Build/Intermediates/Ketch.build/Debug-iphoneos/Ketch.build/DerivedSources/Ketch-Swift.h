// Generated by Apple Swift version 3.0.2 (swiftlang-800.0.63 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import Foundation;
@import CoreGraphics;
@import FBSDKLoginKit;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;

SWIFT_CLASS("_TtC5Ketch11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
- (BOOL)application:(UIApplication * _Nonnull)app openURL:(NSURL * _Nonnull)url options:(NSDictionary<UIApplicationOpenURLOptionsKey, id> * _Nonnull)options;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class user;
@class Message;
@class UITextField;
@class UICollectionView;
@class UICollectionViewCell;
@class UICollectionViewLayout;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC5Ketch17ChatLogController")
@interface ChatLogController : UICollectionViewController <UICollectionViewDelegateFlowLayout, UITextFieldDelegate>
@property (nonatomic, strong) user * _Nullable user;
@property (nonatomic, copy) NSArray<Message *> * _Nonnull messages;
- (void)observeMessages;
@property (nonatomic, strong) UITextField * _Nonnull inputTextField;
@property (nonatomic, readonly, copy) NSString * _Nonnull cellID;
- (void)viewDidLoad;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)handleBack;
- (void)setupInputComponents;
- (void)handleSend;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
- (nonnull instancetype)initWithCollectionViewLayout:(UICollectionViewLayout * _Nonnull)layout OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITextView;

SWIFT_CLASS("_TtC5Ketch15ChatMessageCell")
@interface ChatMessageCell : UICollectionViewCell
@property (nonatomic, readonly, strong) UITextView * _Nonnull textView;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImageView;
@class UILabel;

SWIFT_CLASS("_TtC5Ketch18CollectionViewCell")
@interface CollectionViewCell : UICollectionViewCell
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified imageView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified titleLabel;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5Ketch9Dashboard")
@interface Dashboard : UITabBarController
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImage;

SWIFT_CLASS("_TtC5Ketch28IndividualItemViewController")
@interface IndividualItemViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified imageView;
@property (nonatomic, strong) UIImage * _Nonnull image;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIStoryboardSegue;

SWIFT_CLASS("_TtC5Ketch18ItemListController")
@interface ItemListController : UIViewController <UIScrollViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
@property (nonatomic, weak) IBOutlet UICollectionView * _Null_unspecified collectionView;
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull products;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didSelectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class FBSDKLoginButton;
@class FBSDKLoginManagerLoginResult;

SWIFT_CLASS("_TtC5Ketch11LoginScreen")
@interface LoginScreen : UIViewController <FBSDKLoginButtonDelegate>
- (void)viewDidLoad;
- (void)userLoggedIn;
- (void)handleCustomFBLogin;
- (void)didReceiveMemoryWarning;
- (void)loginButtonDidLogOut:(FBSDKLoginButton * _Null_unspecified)loginButton;
- (void)loginButton:(FBSDKLoginButton * _Null_unspecified)loginButton didCompleteWithResult:(FBSDKLoginManagerLoginResult * _Null_unspecified)result error:(NSError * _Null_unspecified)error;
- (void)loginProcess;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSNumber;

SWIFT_CLASS("_TtC5Ketch7Message")
@interface Message : NSObject
@property (nonatomic, copy) NSString * _Nullable fromID;
@property (nonatomic, copy) NSString * _Nullable text;
@property (nonatomic, strong) NSNumber * _Nullable timestamp;
@property (nonatomic, copy) NSString * _Nullable toID;
- (NSString * _Nullable)chatPartnerID;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;
@class UITableViewCell;

SWIFT_CLASS("_TtC5Ketch17MessageController")
@interface MessageController : UITableViewController
@property (nonatomic, readonly, copy) NSString * _Nonnull cellID;
- (void)viewDidLoad;
@property (nonatomic, copy) NSArray<Message *> * _Nonnull messages;
@property (nonatomic, copy) NSDictionary<NSString *, Message *> * _Nonnull messagesDictionary;
- (void)observeUserMessages;
- (void)observeMessages;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)handleNewMessage;
- (void)checkIfUserIsLoggedIn;
- (void)fetchUserAndSetupNavBarTitle;
- (void)showChatControllerForUserWithUser:(user * _Nonnull)user;
- (void)handleLogout;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5Ketch9MyAccount")
@interface MyAccount : UIViewController <FBSDKLoginButtonDelegate>
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified nameLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified emailLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified UIDLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified zipLabel;
- (void)viewDidLoad;
- (void)checkIfUserIsLoggedIn;
- (void)loginButtonDidLogOut:(FBSDKLoginButton * _Null_unspecified)loginButton;
- (void)loginButton:(FBSDKLoginButton * _Null_unspecified)loginButton didCompleteWithResult:(FBSDKLoginManagerLoginResult * _Null_unspecified)result error:(NSError * _Null_unspecified)error;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIButton;
@class UITapGestureRecognizer;

SWIFT_CLASS("_TtC5Ketch7NewItem")
@interface NewItem : UIViewController
@property (nonatomic, strong) IBOutlet UIButton * _Null_unspecified postButton;
@property (nonatomic, strong) IBOutlet UITextField * _Null_unspecified itemTitle;
@property (nonatomic, strong) IBOutlet UITextField * _Null_unspecified itemDesc;
@property (nonatomic, strong) IBOutlet UITextField * _Null_unspecified itemPrice;
@property (nonatomic, strong) IBOutlet UITextField * _Null_unspecified itemZip;
- (void)viewDidLoad;
- (IBAction)postAndReturn:(UIButton * _Nonnull)sender;
- (IBAction)dismissKeyboard:(UITapGestureRecognizer * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5Ketch20NewMessageController")
@interface NewMessageController : UITableViewController
@property (nonatomic, readonly, copy) NSString * _Nonnull cellID;
@property (nonatomic, copy) NSArray<user *> * _Nonnull users;
- (void)viewDidLoad;
- (void)fetchUser;
- (void)handleCancel;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@property (nonatomic, strong) MessageController * _Nullable messagesController;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5Ketch11SellingPost")
@interface SellingPost : UIViewController
@property (nonatomic, strong) IBOutlet UIButton * _Null_unspecified newItemButton;
- (void)viewDidLoad;
- (IBAction)addNewItem:(UIButton * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5Ketch8UserCell")
@interface UserCell : UITableViewCell
@property (nonatomic, strong) Message * _Nullable message;
- (void)layoutSubviews;
@property (nonatomic, readonly, strong) UIImageView * _Nonnull profileImageView;
@property (nonatomic, readonly, strong) UILabel * _Nonnull timeLabel;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5Ketch12splashScreen")
@interface splashScreen : UIViewController
- (void)viewDidLoad;
- (void)loggedIn;
- (void)loggedOut;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5Ketch4user")
@interface user : NSObject
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nullable email;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop