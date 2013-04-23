//
//  MainViewController.h
//  SwamijiContacts
//
//  Created by Praveen on 4/21/13.
//  Copyright (c) 2013 DeviMandir. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AddressBookUI/AddressBookUI.h>

@interface MainViewController : UIViewController <ABPeoplePickerNavigationControllerDelegate>

@property (strong, nonatomic) IBOutlet UILabel *firstName;
@property (strong, nonatomic) IBOutlet UILabel *phoneNumber;


- (IBAction)showPicker:(id)sender;



@end
