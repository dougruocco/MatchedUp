//
//  CCTransitionAnimator.h
//  MatchedUp
//
//  Created by Doug Ruocco on 4/14/15.
//  Copyright (c) 2015 DRoc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CCTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic, assign) BOOL presenting;

@end
