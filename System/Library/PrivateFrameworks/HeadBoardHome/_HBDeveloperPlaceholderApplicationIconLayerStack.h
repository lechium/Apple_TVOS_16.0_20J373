//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUINamedLayerStack, NSArray, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _HBDeveloperPlaceholderApplicationIconLayerStack : NSObject
{
    UIImage *_layeredImage;	// 8 = 0x8
    CUINamedLayerStack *_layerStack;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004b022
@property(readonly, nonatomic, getter=_layerStack) CUINamedLayerStack *layerStack; // @synthesize layerStack=_layerStack;
@property(readonly, nonatomic, getter=_layeredImage) UIImage *layeredImage; // @synthesize layeredImage=_layeredImage;
@property(readonly, nonatomic) struct CGImage *flattenedImage;
@property(readonly, nonatomic) NSArray *layers;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize size;
- (id)imageConfigurationForConfiguration:(id)arg1;	// IMP=0x000000000004aead
- (id)init;	// IMP=0x000000000004ad74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool flatImageContainsCornerRadius;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id radiosityImage;
@property(readonly, nonatomic) struct CGSize radiosityImageScale;
@property(readonly) Class superclass;

@end

