//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface TVSettingsTapToRepairUserPresenterConfiguration : NSObject
{
    MISSING_TYPE *copyStyle;	// 8 = 0x8
    MISSING_TYPE *needsCDPRepair;	// 16 = 0x10
    MISSING_TYPE *cancelActionTitle;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00400000000f1190
- (id)copyWithZone:(void *)arg1;	// IMP=0x00100000000f10c0
- (id)init;	// IMP=0x00100000000f0fd0
@property(nonatomic, copy) NSString *cancelActionTitle;
@property(nonatomic) _Bool needsCDPRepair; // @synthesize needsCDPRepair;
@property(nonatomic) long long copyStyle; // @synthesize copyStyle;

@end
