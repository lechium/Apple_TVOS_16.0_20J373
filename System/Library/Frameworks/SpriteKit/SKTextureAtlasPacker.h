//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKTextureAtlasPacker : NSObject
{
}

+ (struct CGImage *)copyProcessedImageSource:(id)arg1;	// IMP=0x00000000000ba2d7
- (void)generateTextureAtlasImages:(id)arg1 outputDictionary:(id *)arg2 forcePOT:(_Bool)arg3;	// IMP=0x00000000000ba488
- (id)processPackedTextureAtlas:(const void *)arg1 suffix:(id)arg2 packer:(shared_ptr_7747cbe3)arg3 sortedTrimArray:(const void *)arg4 sortedTextureArray:(const void *)arg5;	// IMP=0x00000000000b9384
- (id)generateMetaData;	// IMP=0x00000000000b92d3
- (id)getTextureFileList:(id)arg1 modDate:(id *)arg2;	// IMP=0x00000000000b8d42
- (id)partitionTextureFilesByResolution:(id)arg1;	// IMP=0x00000000000b8901
- (_Bool)isFullyOpaque:(struct CGImage *)arg1;	// IMP=0x00000000000b86fc
- (struct CGRect)calcNonAlphaArea:(struct CGImage *)arg1;	// IMP=0x00000000000b8221
- (struct CGImage *)copyRotateCGImage:(struct CGImage *)arg1 direction:(_Bool)arg2;	// IMP=0x00000000000b7fa7

@end

