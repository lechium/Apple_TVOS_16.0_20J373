//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSObject;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface SSXPCData : NSData
{
    NSObject<OS_xpc_object> *_xpcData;	// 8 = 0x8
}

@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcData; // @synthesize xpcData=_xpcData;
- (unsigned long long)length;	// IMP=0x000000000014cf4e
- (const void *)bytes;	// IMP=0x000000000014cf39
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014cf2e
- (void)dealloc;	// IMP=0x000000000014cee8
- (id)initWithXPCData:(id)arg1;	// IMP=0x000000000014ce58

@end
