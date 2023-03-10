//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIApplication.h>

@protocol VUIApplicationDelegate;

@interface UIApplication (VideosUI)
+ (_Bool)vuiIsActive;	// IMP=0x00200000001ac4e0
+ (_Bool)vuiIsRTL;	// IMP=0x00200000001ac491
@property(readonly, nonatomic) _Bool vui_isNonLightningAVAdapterConnected;
@property(readonly, nonatomic) id <VUIApplicationDelegate> vui_delegate;
@property(readonly, nonatomic) id <VUIApplicationDelegate> vuiDelegate;
@property(readonly, nonatomic) _Bool vuiIsNonLightningAVAdapterConnected;
@end

