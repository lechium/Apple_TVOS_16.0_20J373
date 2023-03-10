//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCDatagramChannelManager : NSObject
{
    struct _opaque_pthread_mutex_t _stateLock;	// 8 = 0x8
    unsigned int _nextToken;	// 72 = 0x48
    CDUnknownBlockType _readHandler;	// 80 = 0x50
    NSMutableDictionary *_datagramChannels;	// 88 = 0x58
    NSMutableDictionary *_destinations;	// 96 = 0x60
}

+ (id)sharedInstance;	// IMP=0x0060000000095a13
@property(copy) CDUnknownBlockType readHandler; // @synthesize readHandler=_readHandler;
- (void)removeDatagramChannel:(id)arg1;	// IMP=0x000000000009681b
- (void)executeBlockForIDSDestination:(id)arg1 blockToExecute:(CDUnknownBlockType)arg2;	// IMP=0x0000000000096744
- (id)datagramChannelWithChannelToken:(unsigned int)arg1;	// IMP=0x00000000000966e1
- (_Bool)setupDatagramChannel:(id)arg1 eventHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0000000000096555
- (id)setupEmulatedDatagramChannelWithDestination:(id)arg1 datagramChannel:(id)arg2;	// IMP=0x00000000000962a5
- (id)addDatagramChannelWithDestination:(id)arg1 eventHandler:(CDUnknownBlockType)arg2 dataPath:(int)arg3 error:(id *)arg4;	// IMP=0x0000000000095dfd
- (id)addDatagramChannelWithDestination:(id)arg1 eventHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0000000000095de5
- (id)addDatagramChannelWithDescriptor:(int)arg1 eventHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0000000000095b65
- (void)dealloc;	// IMP=0x0000000000095ae8
- (id)init;	// IMP=0x0000000000095a58

@end

