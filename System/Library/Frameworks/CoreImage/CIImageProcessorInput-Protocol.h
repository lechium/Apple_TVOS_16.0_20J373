//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MTLTexture;

@protocol CIImageProcessorInput
@property(readonly, nonatomic) unsigned long long digest;
@property(readonly, nonatomic) id <MTLTexture> metalTexture;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer;
@property(readonly, nonatomic) struct __IOSurface *surface;
@property(readonly, nonatomic) const void *baseAddress;
@property(readonly, nonatomic) int format;
@property(readonly, nonatomic) unsigned long long bytesPerRow;
@property(readonly, nonatomic) struct CGRect region;
@end

