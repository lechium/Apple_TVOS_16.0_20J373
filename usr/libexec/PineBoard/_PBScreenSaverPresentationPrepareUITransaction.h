//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class NSDictionary, UIViewController;

@interface _PBScreenSaverPresentationPrepareUITransaction : BSTransaction
{
    UIViewController *_childViewController;	// 8 = 0x8
    NSDictionary *_options;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000014b385
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
- (void)_begin;	// IMP=0x001000000014b0ef
- (_Bool)_canBeInterrupted;	// IMP=0x001000000014b0e7

@end

