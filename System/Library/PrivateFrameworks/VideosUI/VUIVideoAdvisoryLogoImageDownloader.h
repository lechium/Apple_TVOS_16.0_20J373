//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVImageProxy;

__attribute__((visibility("hidden")))
@interface VUIVideoAdvisoryLogoImageDownloader : NSObject
{
    TVImageProxy *_ratingImageProxy;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000eba6a
@property(retain, nonatomic) TVImageProxy *ratingImageProxy; // @synthesize ratingImageProxy=_ratingImageProxy;
- (void)downloadImageWithURL:(id)arg1 imageInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000eb552

@end
