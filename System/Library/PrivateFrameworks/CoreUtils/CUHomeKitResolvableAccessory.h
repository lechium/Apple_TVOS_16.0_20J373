//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMAccessory, NSData;

__attribute__((visibility("hidden")))
@interface CUHomeKitResolvableAccessory : NSObject
{
    HMAccessory *_accessory;	// 8 = 0x8
    NSData *_irkData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005083d
@property(retain, nonatomic) NSData *irkData; // @synthesize irkData=_irkData;
@property(retain, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;

@end
