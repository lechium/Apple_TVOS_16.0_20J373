//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, VideoAttributes;
@protocol VCVideoCaptureServer;

__attribute__((visibility("hidden")))
@interface VCVideoCapture : NSObject
{
    id _captureServer;	// 8 = 0x8
    NSMutableArray *_sinkArray;	// 16 = 0x10
    NSString *_sourceUID;	// 24 = 0x18
    VideoAttributes *_localVideoAttributes;	// 32 = 0x20
    struct _opaque_pthread_mutex_t _sinkArrayMutex;	// 40 = 0x28
}

@property(readonly) NSArray *sinkArray; // @synthesize sinkArray=_sinkArray;
- (void)distributeVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 preview:(_Bool)arg3 orientation:(int)arg4 fromCamera:(_Bool)arg5 camera:(int)arg6 switching:(_Bool)arg7 videoMirrored:(_Bool)arg8;	// IMP=0x0000000000345146
- (unsigned int)removeSink:(id)arg1;	// IMP=0x0000000000344d38
- (unsigned int)addSink:(id)arg1;	// IMP=0x0000000000344922
@property(readonly) unsigned int sinkCount;
@property(readonly) NSObject<VCVideoCaptureServer> *captureServer;
- (void)dealloc;	// IMP=0x0000000000344839
- (id)initWithCaptureServer:(id)arg1;	// IMP=0x0000000000344763

@end

