//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@interface NSCoder (LPExtras)
- (id)_lp_strictlyDecodeColorForKey:(id)arg1;	// IMP=0x00600000000676da
- (void)_lp_encodeColorIfNotNil:(id)arg1 forKey:(id)arg2;	// IMP=0x006000000006753b
- (void)_lp_encodeURLIfNotNilOrLocalFile:(id)arg1 forKey:(id)arg2;	// IMP=0x00600000000674c5
- (void)_lp_encodeArrayIfNotEmpty:(id)arg1 forKey:(id)arg2;	// IMP=0x0060000000067453
- (void)_lp_encodeObjectIfNotNil:(id)arg1 forKey:(id)arg2;	// IMP=0x006000000006743a
- (id)_lp_strictlyDecodeDictionaryOfObjectsWithKeysOfClass:(Class)arg1 andObjectsOfClass:(Class)arg2 forKey:(id)arg3;	// IMP=0x0060000000067205
- (id)_lp_strictlyDecodeArrayOfObjectsOfClasses:(id)arg1 forKey:(id)arg2;	// IMP=0x0060000000066e3f
- (id)_lp_strictlyDecodeArrayOfObjectsOfClass:(Class)arg1 forKey:(id)arg2;	// IMP=0x0060000000066bfa
- (id)_lp_strictlyDecodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x0060000000066a35
- (id)_lp_strictlyDecodeTopLevelObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x006000000006695e
- (id)_lp_strictlyDecodeObjectOfClasses:(id)arg1 forKey:(id)arg2;	// IMP=0x006000000006679f
- (id)_lp_strictlyDecodeObjectOfClass:(Class)arg1 forKey:(id)arg2;	// IMP=0x00600000000666d0
- (id)_lp_strictlyDecodeLPVideoForKey:(id)arg1;	// IMP=0x006000000006661d
- (id)_lp_strictlyDecodeArrayOfLPImagesForKey:(id)arg1;	// IMP=0x006000000006656a
- (id)_lp_strictlyDecodeLPImageForKey:(id)arg1;	// IMP=0x00600000000664b7
- (id)_lp_strictlyDecodeArrayOfLPARAssetsForKey:(id)arg1;	// IMP=0x0060000000066404
- (id)_lp_strictlyDecodeLPARAssetForKey:(id)arg1;	// IMP=0x0060000000066351
- (id)_lp_strictlyDecodeNSAttributedStringForKey:(id)arg1;	// IMP=0x006000000006629e
- (id)_lp_strictlyDecodeNSStringForKey:(id)arg1;	// IMP=0x00600000000661eb
- (id)_lp_strictlyDecodeNSDataForKey:(id)arg1;	// IMP=0x0060000000066138
@end
