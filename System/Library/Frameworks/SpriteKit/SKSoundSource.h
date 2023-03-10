//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKSoundSource : NSObject
{
    unsigned int _sourceId;	// 8 = 0x8
    NSMutableArray *_buffers;	// 16 = 0x10
}

+ (id)sourceWithBuffer:(id)arg1;	// IMP=0x00600000000bee47
+ (id)source;	// IMP=0x00600000000bee06
- (void).cxx_destruct;	// IMP=0x00000000000bf487
- (void)dealloc;	// IMP=0x00000000000bf408
- (id)description;	// IMP=0x00000000000bf1b7
- (void)purgeCompletedBuffers;	// IMP=0x00000000000bf127
@property(readonly, nonatomic) int queuedBufferCount;
@property(readonly, nonatomic) int completedBufferCount;
@property(readonly, nonatomic) _Bool isPlaying;
@property(nonatomic) struct CGPoint position;
@property(nonatomic) double gain;
@property(nonatomic) _Bool shouldLoop;
- (void)stop;	// IMP=0x00000000000bef5f
- (void)pause;	// IMP=0x00000000000bef4c
- (_Bool)play;	// IMP=0x00000000000bef2b
- (void)queueBuffer:(id)arg1;	// IMP=0x00000000000beeb9
- (id)init;	// IMP=0x00000000000bed99

@end

