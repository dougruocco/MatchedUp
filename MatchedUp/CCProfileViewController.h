//
//  CCProfileViewController.h
//  MatchedUp
//
//  Created by Douglas Ruocco on 3/31/15.
//  Copyright (c) 2015 DRoc. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CCProfileViewControllerDelegate <NSObject>

-(void)didPressLike;
-(void)didPressDislike;

@end

@interface CCProfileViewController : UIViewController

@property (strong, nonatomic) PFObject *photo;
@property (weak, nonatomic) id <CCProfileViewControllerDelegate> delegate;


@end
