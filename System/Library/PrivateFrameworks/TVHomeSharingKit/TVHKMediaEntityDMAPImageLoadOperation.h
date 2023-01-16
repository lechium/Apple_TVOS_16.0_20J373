//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TVHKMediaLibraryRequestOperation, TVHKMediaLibraryRequestSession, TVHKMediaLibrarySessionState;

__attribute__((visibility("hidden")))
@interface TVHKMediaEntityDMAPImageLoadOperation
{
    _Bool _imageWillBeCropped;	// 8 = 0x8
    TVHKMediaLibrarySessionState *_sessionState;	// 16 = 0x10
    TVHKMediaLibraryRequestSession *_requestSession;	// 24 = 0x18
    TVHKMediaLibraryRequestOperation *_imageRequestOperation;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000c55d
@property(retain, nonatomic) TVHKMediaLibraryRequestOperation *imageRequestOperation; // @synthesize imageRequestOperation=_imageRequestOperation;
@property(nonatomic) _Bool imageWillBeCropped; // @synthesize imageWillBeCropped=_imageWillBeCropped;
@property(readonly, nonatomic) TVHKMediaLibraryRequestSession *requestSession; // @synthesize requestSession=_requestSession;
@property(readonly, copy, nonatomic) TVHKMediaLibrarySessionState *sessionState; // @synthesize sessionState=_sessionState;
- (void)_handleResponse:(id)arg1;	// IMP=0x000000000000c2c4
- (id)_mediaEntityImageLoadParams;	// IMP=0x000000000000c2b2
- (void)cancel;	// IMP=0x000000000000c234
- (void)executionDidBegin;	// IMP=0x000000000000befc
- (id)initWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 sessionState:(id)arg4 requestSession:(id)arg5;	// IMP=0x000000000000bdce
- (id)initWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;	// IMP=0x000000000000bd5f

@end

