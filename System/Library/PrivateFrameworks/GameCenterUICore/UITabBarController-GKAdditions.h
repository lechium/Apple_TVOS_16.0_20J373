//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITabBarController.h>

@class NSString;

@interface UITabBarController (GKAdditions)
- (_Bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x002000000000ce68
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x002000000000ccc1
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;	// IMP=0x002000000000cbfb
- (void)_gkForceNextContentUpdate;	// IMP=0x002000000000cab9
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;	// IMP=0x002000000000ca8a
- (void)_gkResetContents;	// IMP=0x002000000000c9fa
- (void)_gkSetContentsNeedUpdateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x002000000000c981

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
