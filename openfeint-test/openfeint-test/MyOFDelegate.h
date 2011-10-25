//
//  MyOFDelegate.h
//  openfeint-test
//
//  Created by Carlos Sessa on 10/24/11.
//  Copyright (c) 2011 NASA Trained Monkeys. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OpenFeintDelegate.h"

@interface MyOFDelegate : NSObject<OpenFeintDelegate>
- (void)dashboardWillAppear;
- (void)dashboardDidAppear;
- (void)dashboardWillDisappear;
- (void)dashboardDidDisappear;
- (void)userLoggedIn:(NSString*)userId;
- (BOOL)showCustomOpenFeintApprovalScreen;

@end
