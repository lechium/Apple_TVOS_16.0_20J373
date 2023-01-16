//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSDictionary, UIViewController, VUIAppContext, VUIDocumentDataSource;

@protocol VUIDocumentCreator <NSObject>

@optional
- (void)scrollViewControllerToTop:(UIViewController *)arg1;
- (_Bool)isDocumentViewController:(UIViewController *)arg1 equalToViewController:(UIViewController *)arg2;
- (UIViewController *)viewControllerWithDocumentDataSource:(VUIDocumentDataSource *)arg1 appContext:(VUIAppContext *)arg2 documentOptions:(NSDictionary *)arg3;
@end

