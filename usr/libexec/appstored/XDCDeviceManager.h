//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface XDCDeviceManager : NSObject
{
    NSMutableDictionary *_devices;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000dae58
- (id)init;	// IMP=0x00100000000dadbf

@end

