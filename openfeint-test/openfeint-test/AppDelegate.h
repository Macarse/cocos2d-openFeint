//
//  AppDelegate.h
//  openfeint-test
//
//  Created by Carlos Sessa on 10/24/11.
//  Copyright NASA Trained Monkeys 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
