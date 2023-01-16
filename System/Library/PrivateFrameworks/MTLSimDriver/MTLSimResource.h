//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTLSimDevice, MTLSimHeap, NSString;
@protocol MTLDevice, MTLHeap;

__attribute__((visibility("hidden")))
@interface MTLSimResource : NSObject
{
    unsigned long long _purgeableState;	// 8 = 0x8
    MTLSimHeap *_heap;	// 16 = 0x10
    unsigned long long _heapOffset;	// 24 = 0x18
    unsigned int _resourceRef;	// 32 = 0x20
    unsigned long long _options;	// 40 = 0x28
    unsigned long long _cpuCacheMode;	// 48 = 0x30
    unsigned long long _storageMode;	// 56 = 0x38
    MTLSimDevice *_device;	// 64 = 0x40
    NSString *_label;	// 72 = 0x48
    struct os_unfair_lock_s _labelLock;	// 80 = 0x50
    unsigned long long _hazardTrackingMode;	// 88 = 0x58
    _Bool _isAliasable;	// 96 = 0x60
    int responsibleProcess;	// 100 = 0x64
    unsigned long long allocatedSize;	// 104 = 0x68
    unsigned long long allocationID;	// 112 = 0x70
    unsigned long long protectionOptions;	// 120 = 0x78
}

@property int responsibleProcess; // @synthesize responsibleProcess;
@property(readonly) unsigned long long protectionOptions; // @synthesize protectionOptions;
@property(readonly) unsigned int serializerResourceRef; // @synthesize serializerResourceRef=_resourceRef;
@property(readonly) unsigned long long allocationID; // @synthesize allocationID;
@property(readonly) unsigned long long allocatedSize; // @synthesize allocatedSize;
@property(readonly) unsigned long long cpuCacheMode; // @synthesize cpuCacheMode=_cpuCacheMode;
@property(readonly) unsigned long long heapOffset;
- (void)setHeapOffset:(unsigned long long)arg1;	// IMP=0x00000000000136d5
- (void)waitUntilComplete;	// IMP=0x00000000000136cf
- (_Bool)isPurgeable;	// IMP=0x00000000000136c7
- (_Bool)isComplete;	// IMP=0x00000000000136bf
- (_Bool)doesAliasResource:(id)arg1;	// IMP=0x000000000001368f
- (_Bool)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000001367a
- (_Bool)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000013662
- (_Bool)doesAliasResources:(const id *)arg1 count:(unsigned long long)arg2 all:(_Bool)arg3;	// IMP=0x0000000000013511
@property(readonly) unsigned long long hazardTrackingMode; // @dynamic hazardTrackingMode;
@property(readonly) unsigned long long unfilteredResourceOptions; // @dynamic unfilteredResourceOptions;
@property(readonly) unsigned long long resourceOptions; // @dynamic resourceOptions;
@property(readonly) unsigned long long storageMode; // @synthesize storageMode=_storageMode;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;	// IMP=0x0000000000013475
- (void)makeAliasable;	// IMP=0x00000000000133d7
- (_Bool)isAliasable;	// IMP=0x00000000000133ce
@property(readonly) id <MTLHeap> heap; // @dynamic heap;
@property(copy) NSString *label; // @dynamic label;
- (id)retainedLabel;	// IMP=0x0000000000013377
@property(readonly) id <MTLDevice> device; // @dynamic device;
- (void)dealloc;	// IMP=0x00000000000132ac
- (id)initWithResourceRef:(unsigned int)arg1 options:(unsigned long long)arg2 device:(id)arg3 heap:(id)arg4;	// IMP=0x000000000001320f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

