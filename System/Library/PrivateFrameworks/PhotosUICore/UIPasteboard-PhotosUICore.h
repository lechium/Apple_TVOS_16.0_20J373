//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPasteboard.h>

@interface UIPasteboard (PhotosUICore)
+ (id)px_newPasteboardItemProviderForAsset:(id)arg1 fileURL:(id)arg2 utiType:(id)arg3;	// IMP=0x0020000000819160
+ (id)px_newPasteboardRepresentationForAsset:(id)arg1 data:(id)arg2 utiType:(id)arg3;	// IMP=0x002000000081909e
@property(readonly, nonatomic) _Bool px_containsAssets;
- (id)px_assets;	// IMP=0x0010000000818b14
- (void)px_setAssetRepresentations:(id)arg1;	// IMP=0x0010000000818b02
- (void)px_setAssetRepresentation:(id)arg1;	// IMP=0x0010000000818a58
@end
