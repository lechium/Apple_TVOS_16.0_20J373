//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVInternalDeviceList : NSObject
{
    CDUnknownBlockType changeListener;	// 8 = 0x8
    NSMutableArray *deviceList;	// 16 = 0x10
    struct _opaque_pthread_mutex_t listLock;	// 24 = 0x18
}

+ (id)defaultDeviceOfType:(unsigned int)arg1;	// IMP=0x0060000000256f04
+ (id)newDeviceList;	// IMP=0x0060000000256efc
@property(copy, nonatomic) CDUnknownBlockType changeListener;
- (id)deviceList;	// IMP=0x000000000025751f
- (void)notifyDeviceListChanged;	// IMP=0x00000000002571e8
- (void)dealloc;	// IMP=0x0000000000257172
- (void)cleanup;	// IMP=0x000000000025716c
- (id)init;	// IMP=0x00000000002570df
- (unsigned int)dataSourceControlID;	// IMP=0x0000000000256f10

@end

