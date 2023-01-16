//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MNJunctionViewImageLoader : NSObject
{
    NSArray *_preloadEvents;	// 8 = 0x8
    double _imageWidth;	// 16 = 0x10
    double _imageHeight;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000055a78
- (id)_stringForImageIDs:(id)arg1;	// IMP=0x0000000000055850
- (id)_imagesForRequest:(id)arg1 response:(id)arg2;	// IMP=0x0000000000055262
- (void)_imagesForIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000054d57
- (void)imagesForJunctionView:(id)arg1 eventID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000054bf7
- (void)updateForLocation:(id)arg1 remainingDistanceOnRoute:(double)arg2;	// IMP=0x0000000000054883
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;	// IMP=0x000000000005466f
- (void)setJunctionViewEvents:(id)arg1;	// IMP=0x0000000000053f45
- (id)init;	// IMP=0x0000000000053e92

@end

