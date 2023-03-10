//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, VCMomentsHistoryBuffer, VideoAttributes;
@protocol OS_dispatch_queue, VCMovieWriterProtocol;

__attribute__((visibility("hidden")))
@interface VCMomentsHistory : NSObject
{
    NSMutableDictionary *_writers;	// 8 = 0x8
    NSObject<VCMovieWriterProtocol> *_writer;	// 16 = 0x10
    NSString *_masterTransactionID;	// 24 = 0x18
    NSMutableArray *_pendingRequests;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_momentsQueue;	// 40 = 0x28
    VCMomentsHistoryBuffer *_frameBuffer;	// 48 = 0x30
    VCMomentsHistoryBuffer *_localAudioBuffer;	// 56 = 0x38
    VCMomentsHistoryBuffer *_remoteAudioBuffer;	// 64 = 0x40
    NSMutableDictionary *_completionHandlers;	// 72 = 0x48
    NSMutableDictionary *_stillImageURLs;	// 80 = 0x50
    VideoAttributes *_remoteScreenAttributes;	// 88 = 0x58
    struct __CVPixelBufferPool *_bufferPool;	// 96 = 0x60
    struct CGSize _bufferPoolResolution;	// 104 = 0x68
    struct __CVPixelBufferPool *_copyPool;	// 120 = 0x78
    struct OpaqueVTPixelTransferSession *_transferSession;	// 128 = 0x80
    struct OpaqueVTPixelTransferSession *_copyTransferSession;	// 136 = 0x88
    int _captureHeight;	// 144 = 0x90
    int _captureWidth;	// 148 = 0x94
    _Bool _resize;	// 152 = 0x98
    _Bool _isFirstFrame;	// 153 = 0x99
    int _imageType;	// 156 = 0x9c
    int videoPayload;	// 160 = 0xa0
    struct __CFAllocator *_audioSampleBufferAllocator;	// 168 = 0xa8
    _Bool _enableLocalVideoRecording;	// 176 = 0xb0
    struct tagVCMomentsHistoryAudioFormat _localFormat;	// 184 = 0xb8
    struct tagVCMomentsHistoryAudioFormat _remoteFormat;	// 232 = 0xe8
    struct __CFAllocator *_frameAllocator;	// 280 = 0x118
    _Bool _retainPixelBufferEnabled;	// 288 = 0x120
    int _videoCodec;	// 292 = 0x124
}

@property(nonatomic) int videoCodec; // @synthesize videoCodec=_videoCodec;
@property(nonatomic) int imageType; // @synthesize imageType=_imageType;
@property(retain, nonatomic) VideoAttributes *remoteScreenAttributes; // @synthesize remoteScreenAttributes=_remoteScreenAttributes;
- (void)cleanupTransferSession;	// IMP=0x000000000005ce05
- (void)setCompeletionHandler:(CDUnknownBlockType)arg1 forTransactionID:(id)arg2;	// IMP=0x000000000005cdc1
- (void)registerDirectoryWithFilePath:(id)arg1;	// IMP=0x000000000005cdbb
- (void)updateCaptureSizesWithFirstFrame:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000000005cc89
- (void)appendSampleWithWriter:(id)arg1 buffer:(id)arg2 sample:(struct opaqueCMSampleBuffer *)arg3;	// IMP=0x000000000005cb9a
- (unsigned char)_mediaTypeForBuffer:(id)arg1;	// IMP=0x000000000005cb74
- (void)flushHistoryBuffers;	// IMP=0x000000000005cb2f
- (void)updateVideoBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2 sampleBufferCopy:(struct opaqueCMSampleBuffer *)arg3 cameraStatusBits:(unsigned char)arg4 timestamp:(unsigned int)arg5;	// IMP=0x000000000005cace
- (struct __CVBuffer *)copyBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000000005cac6
- (void)updateAudioBuffer:(id)arg1 WithSample:(struct opaqueCMSampleBuffer *)arg2 timestamp:(unsigned int)arg3;	// IMP=0x000000000005c998
- (void)handlePendingRequestsWithSourceURL:(id)arg1 error:(id)arg2;	// IMP=0x000000000005c72e
- (void)handlePendingRequestSuccessWithSourceURL:(id)arg1;	// IMP=0x000000000005c61e
- (void)handlePendingRequestWithError:(id)arg1;	// IMP=0x000000000005c4a2
- (void)handleSinglePendingRequestWithTransactionID:(id)arg1 sourceURL:(id)arg2;	// IMP=0x000000000005c083
- (int)rewriteMovieMetadataWithURL:(id)arg1 transactionID:(id)arg2;	// IMP=0x000000000005bfb4
- (id)getFilePathWithTransactionID:(id)arg1 type:(unsigned char)arg2;	// IMP=0x000000000005bfac
- (void)setupWriterWithTransactionID:(id)arg1 filePath:(id)arg2 stillImageTime:(CDStruct_1b6d18a9)arg3 visibleRect:(struct CGRect)arg4 cameraStatusBit:(unsigned char)arg5;	// IMP=0x000000000005bf3a
- (struct CGSize)calculateVisibleAreaWithVisibleRect:(struct CGRect)arg1 cameraStatusBit:(unsigned char)arg2;	// IMP=0x000000000005bec4
- (void)setupResizingSessionsWithVisibleRect:(struct CGRect)arg1 cameraStatusBit:(unsigned char)arg2;	// IMP=0x000000000005bc9e
- (CDStruct_1b6d18a9)setupStillImageWithTimestamp:(unsigned int)arg1 transactionID:(id)arg2 visibleRect:(struct CGRect *)arg3 cameraStatusBit:(char *)arg4 imageType:(int)arg5;	// IMP=0x000000000005b972
- (_Bool)writeToLivePhotoToFileWithFrame:(struct __CVBuffer *)arg1 transactionID:(id)arg2 URL:(id *)arg3 imageType:(int)arg4 cameraStatusBits:(unsigned char)arg5;	// IMP=0x000000000005b96a
- (_Bool)writeToFileWithTimestamp:(unsigned int)arg1 transactionID:(id)arg2 URL:(id *)arg3 imageType:(int)arg4;	// IMP=0x000000000005b962
- (void)cancelRequestWithTransactionID:(id)arg1;	// IMP=0x000000000005b58b
- (void)cleanupActiveRequests;	// IMP=0x000000000005b0a6
- (void)historyBuffer:(id)arg1 didDequeueSample:(struct opaqueCMSampleBuffer *)arg2 timestamp:(unsigned int)arg3;	// IMP=0x000000000005ac29
- (id)_getActiveWriters;	// IMP=0x000000000005abc2
- (void)endRecording:(id)arg1 timestamp:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005a98f
- (void)startRecording:(unsigned char)arg1 transactionID:(id)arg2 timestamp:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000005a989
- (void)getLivePhotoWithTransactionID:(id)arg1 timestamp:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005a983
- (void)getPhotoWithTransactionID:(id)arg1 timestamp:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005a6f8
- (void)setFrameRate:(float)arg1;	// IMP=0x000000000005a616
- (void)updateResizeFlag;	// IMP=0x000000000005a495
- (void)updateRemoteScreenAttributes:(id)arg1;	// IMP=0x000000000005a365
- (void)addLocalVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 cameraStatusBits:(unsigned char)arg2 timestamp:(unsigned int)arg3;	// IMP=0x000000000005a35f
- (void)addRemoteAudioSample:(struct opaqueVCAudioBufferList *)arg1 timestamp:(unsigned int)arg2;	// IMP=0x000000000005a17b
- (void)addLocalAudioSample:(struct opaqueVCAudioBufferList *)arg1 timestamp:(unsigned int)arg2;	// IMP=0x0000000000059ff6
- (void)dealloc;	// IMP=0x0000000000059e38
- (id)init;	// IMP=0x0000000000059c59

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

