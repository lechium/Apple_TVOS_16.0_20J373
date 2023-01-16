//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemAssetControllerManager : NSObject
{
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;	// 8 = 0x8
}

+ (id)defaultManager;	// IMP=0x00600000001a4436
- (void).cxx_destruct;	// IMP=0x00000000001a480b
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
- (id)mediaItemDownloadControllerWithMediaItem:(id)arg1;	// IMP=0x00000000001a4633
- (id)mediaItemCollectionAssetControllerWithMediaItemCollection:(id)arg1 mediaEntityIdentifier:(id)arg2;	// IMP=0x00000000001a458b
- (id)mediaItemAssetControllerWithMediaItem:(id)arg1 mediaEntityIdentifier:(id)arg2;	// IMP=0x00000000001a44e3
- (id)init;	// IMP=0x00000000001a448b

@end

