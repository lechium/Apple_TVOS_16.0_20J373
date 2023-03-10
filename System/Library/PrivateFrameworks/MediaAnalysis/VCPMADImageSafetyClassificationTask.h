//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADImageSafetyClassificationRequest, NSString, VCPMADServiceImageAsset;

__attribute__((visibility("hidden")))
@interface VCPMADImageSafetyClassificationTask : NSObject
{
    MADImageSafetyClassificationRequest *_request;	// 8 = 0x8
    VCPMADServiceImageAsset *_imageAsset;	// 16 = 0x10
    NSString *_signpostPayload;	// 24 = 0x18
    struct atomic<bool> _canceled;	// 32 = 0x20
}

+ (id)dependencies;	// IMP=0x0010000000053b0b
+ (id)taskWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x0010000000053922
- (void).cxx_destruct;	// IMP=0x0000000000054747
- (int)run;	// IMP=0x0000000000053b3f
- (void)logMemoryWithMessage:(id)arg1;	// IMP=0x0000000000053b39
- (void)cancel;	// IMP=0x0000000000053b2e
- (_Bool)autoCancellable;	// IMP=0x0000000000053b26
- (float)resourceRequirement;	// IMP=0x0000000000053b18
- (id)initWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x0000000000053847

@end

