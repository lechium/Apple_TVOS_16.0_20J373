//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCVideoCapture;

__attribute__((visibility("hidden")))
@interface VCStreamInputVideo
{
    VCVideoCapture *_videoCapture;	// 40 = 0x28
}

- (unsigned int)removeSink:(id)arg1;	// IMP=0x000000000015215e
- (unsigned int)addSink:(id)arg1;	// IMP=0x000000000015205d
- (void)invalidate;	// IMP=0x000000000015200b
- (void)dealloc;	// IMP=0x0000000000151fa6
- (id)initWithStreamInputID:(id)arg1 format:(struct opaqueCMFormatDescription *)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 remoteQueue:(id)arg5;	// IMP=0x0000000000151cf2

@end

