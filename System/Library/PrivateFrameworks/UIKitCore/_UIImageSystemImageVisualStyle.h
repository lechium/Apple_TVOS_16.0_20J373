//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, UIImage;

__attribute__((visibility("hidden")))
@interface _UIImageSystemImageVisualStyle : NSObject
{
    UIImage *_closeImage;	// 8 = 0x8
    UIImage *_cameraImage;	// 16 = 0x10
    UIImage *_actionsImage;	// 24 = 0x18
    UIImage *_checkmarkImage;	// 32 = 0x20
    UIImage *_strokedCheckmarkImage;	// 40 = 0x28
    NSCache *__systemImageCache;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000f53612
- (void)_contentSizeCategoryChanged;	// IMP=0x0000000000f52c0b
- (id)init;	// IMP=0x0000000000f52b58

@end

