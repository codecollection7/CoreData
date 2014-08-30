//
//  CoredataViewController.h
//  CoreData
//
//  Created by Mac on 8/24/14.
//  Copyright (c) 2014 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoredataAppDelegate.h"
@interface CoredataViewController : UIViewController
{
    

}
@property (weak, nonatomic) IBOutlet UITextField *name;

@property (weak, nonatomic) IBOutlet UITextField *address;
@property (weak, nonatomic) IBOutlet UITextField *phone;
@property (weak, nonatomic) IBOutlet UILabel *status;

- (IBAction)savedata:(id)sender;
- (IBAction)findcontact:(id)sender;

@end
