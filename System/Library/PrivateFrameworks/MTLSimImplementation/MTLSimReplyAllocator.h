//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface MTLSimReplyAllocator : NSObject
{
    NSObject<OS_dispatch_data> *_data;	// 8 = 0x8
}

@property(readonly) NSObject<OS_dispatch_data> *data; // @synthesize data=_data;
- (char *)allocateOperationBytes:(unsigned long long)arg1;	// IMP=0x0000000000001aaf
- (void)dealloc;	// IMP=0x0000000000001a70

@end

