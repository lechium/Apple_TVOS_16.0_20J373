//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HeadBoardHome/HBRootItemObserver-Protocol.h>

@class HBApp;

@protocol HBAppObserver <HBRootItemObserver>

@optional
- (void)terminationAssertionsDidChange:(HBApp *)arg1;
- (void)dotStyleDidChange:(HBApp *)arg1;
- (void)appIconDidChange:(HBApp *)arg1;
@end
