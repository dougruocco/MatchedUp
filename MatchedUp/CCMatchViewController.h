//
//  CCMatchViewController.h
//  MatchedUp
//
//  Created by Doug Ruocco on 4/6/15.
//  Copyright (c) 2015 DRoc. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CCMatchViewControllerDelegate <NSObject>

-(void)presentMatchesViewController;

@end

@interface CCMatchViewController : UIViewController

@property (strong, nonatomic) UIImage *matchedUserImage;
@property (weak) id <CCMatchViewControllerDelegate> delegate;

@end
