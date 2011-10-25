//
//  MyOFDelegate.m
//  openfeint-test
//
//  Created by Carlos Sessa on 10/24/11.
//  Copyright (c) 2011 NASA Trained Monkeys. All rights reserved.
//

#import "MyOFDelegate.h"
#import "cocos2d.h"

@implementation MyOFDelegate

- (void)dashboardWillAppear
{
}

- (void)dashboardDidAppear
{
    [[CCDirector sharedDirector] pause];
    [[CCDirector sharedDirector] stopAnimation];
}

- (void)dashboardWillDisappear
{
}

- (void)dashboardDidDisappear
{
    [[CCDirector sharedDirector] resume];
    [[CCDirector sharedDirector] startAnimation];
}

- (void)userLoggedIn:(NSString*)userId
{
}

- (BOOL)showCustomOpenFeintApprovalScreen
{
    return NO;
}

@end
