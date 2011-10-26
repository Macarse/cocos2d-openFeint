//
//  AppDelegate.h
//  openFeint
//
//  Created by Carlos Sessa on 10/26/11.
//  Copyright NASA Trained Monkeys 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window_;
	RootViewController	*viewController_;
}

@property (nonatomic, retain) UIWindow *window;
@property (nonatomic, retain) RootViewController *viewController;

@end
