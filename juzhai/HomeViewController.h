//
//  HomeViewController.h
//  juzhai
//
//  Created by JiaJun Wu on 12-7-18.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

@class ProfileSettingViewController;
@class InterestUserViewController;
@class UserPostViewController;

@interface HomeViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, MFMessageComposeViewControllerDelegate, MFMailComposeViewControllerDelegate>
{
    ProfileSettingViewController *_profileSettingViewController;
    InterestUserViewController *_interestUserViewController;
    InterestUserViewController *_interestMeUserViewController;
    UserPostViewController *_userPostViewController;
    NSInteger _shareToSmsButtonIdex;
    NSInteger _shareToMailButtonIdex;
    NSInteger _shareToThirdparyButtonIdex;
}

@property (strong, nonatomic) IBOutlet UIImageView *logoView;
@property (strong, nonatomic) IBOutlet UILabel *nicknameLabel;
@property (strong, nonatomic) IBOutlet UILabel *infoLabel;
@property (strong, nonatomic) IBOutlet UITableView *infoTableView;
@property (strong, nonatomic) IBOutlet UILabel *logoVerifyLabel;

- (IBAction)editor:(id)sender;

@end
