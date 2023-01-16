//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class JSContext, NSDictionary, NSError, UIViewController, VUITVApplicationController;
@protocol VUITVAppRootViewController;

@protocol VUITVApplicationControllerDelegate <NSObject>

@optional
- (UIViewController<VUITVAppRootViewController> *)rootViewControllerForAppController:(VUITVApplicationController *)arg1;
- (void)appController:(VUITVApplicationController *)arg1 didStopWithOptions:(NSDictionary *)arg2;
- (void)appController:(VUITVApplicationController *)arg1 didFailWithError:(NSError *)arg2;
- (void)appController:(VUITVApplicationController *)arg1 didFinishLaunchingWithOptions:(NSDictionary *)arg2;
- (void)appController:(VUITVApplicationController *)arg1 evaluateAppJavaScriptInContext:(JSContext *)arg2;
@end

