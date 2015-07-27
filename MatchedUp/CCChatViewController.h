//
//  CCChatViewController.h
//  MatchedUp
//
//  Created by Doug Ruocco on 4/7/15.
//  Copyright (c) 2015 DRoc. All rights reserved.
//

#import "JSMessagesViewController.h"

@interface CCChatViewController : JSMessagesViewController <JSMessagesViewDataSource, JSMessagesViewDelegate>

@property (strong, nonatomic) PFObject *chatRoom;

@end
