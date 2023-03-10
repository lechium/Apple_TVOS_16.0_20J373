//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@class UIStoryboardDecodingContext;

@interface NSCoder (UIGeometryKeyedCoding)
- (struct UIOffset)decodeUIOffsetForKey:(id)arg1;	// IMP=0x0030000000782c29
- (struct NSDirectionalEdgeInsets)decodeDirectionalEdgeInsetsForKey:(id)arg1;	// IMP=0x0030000000782ba0
- (struct UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)arg1;	// IMP=0x0030000000782b17
- (struct CGAffineTransform)decodeCGAffineTransformForKey:(id)arg1;	// IMP=0x0030000000782a7a
- (struct CGRect)decodeCGRectForKey:(id)arg1;	// IMP=0x00300000007829e6
- (struct CGSize)decodeCGSizeForKey:(id)arg1;	// IMP=0x0030000000782940
- (struct CGVector)decodeCGVectorForKey:(id)arg1;	// IMP=0x00300000007828a4
- (struct CGPoint)decodeCGPointForKey:(id)arg1;	// IMP=0x00300000007827fe
- (void)encodeUIOffset:(struct UIOffset)arg1 forKey:(id)arg2;	// IMP=0x0030000000782789
- (void)encodeDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets)arg1 forKey:(id)arg2;	// IMP=0x0030000000782717
- (void)encodeUIEdgeInsets:(struct UIEdgeInsets)arg1 forKey:(id)arg2;	// IMP=0x00300000007826a5
- (void)encodeCGAffineTransform:(struct CGAffineTransform)arg1 forKey:(id)arg2;	// IMP=0x003000000078262a
- (void)encodeCGRect:(struct CGRect)arg1 forKey:(id)arg2;	// IMP=0x00300000007825b8
- (void)encodeCGSize:(struct CGSize)arg1 forKey:(id)arg2;	// IMP=0x0030000000782543
- (void)encodeCGVector:(struct CGVector)arg1 forKey:(id)arg2;	// IMP=0x00300000007824ce
- (void)encodeCGPoint:(struct CGPoint)arg1 forKey:(id)arg2;	// IMP=0x0030000000782459
- (struct CAFrameRateRange)_ui_decodeCAFrameRateRangeForKey:(id)arg1;	// IMP=0x0030000000782d4e
- (void)_ui_encodeCAFrameRateRange:(struct CAFrameRateRange)arg1 forKey:(id)arg2;	// IMP=0x0030000000782cc5
- (void)_initializeClassSwapperWithCurrentDecodingViewControllerIfNeeded:(id)arg1;	// IMP=0x00300000007eabc2
- (id)_decodeObjectsAndTrackChildViewControllerIndexWithParent:(id)arg1 forKey:(id)arg2;	// IMP=0x00300000007eaa05
- (id)_decodeObjectsWithSourceSegueTemplate:(id)arg1 creator:(CDUnknownBlockType)arg2 sender:(id)arg3 forKey:(id)arg4;	// IMP=0x00300000007ea77c
- (void)_createStoryboardDecodingContextIfNeeded;	// IMP=0x00300000007ea714
@property(readonly, nonatomic) UIStoryboardDecodingContext *_storyboardDecodingContext;
- (CDUnknownBlockType)_ui_decodeNSUIntegerVectorForKey:(id)arg1 returnedCount:(unsigned long long *)arg2;	// IMP=0x0030000000ae914e
- (void)_ui_encodeNSUIntegerVector:(const unsigned long long *)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x0030000000ae90bc
- (CDUnknownBlockType)_ui_decodeVectorForKey:(id)arg1 returnedCount:(unsigned long long *)arg2;	// IMP=0x0030000000ae8f88
- (void)_ui_encodeVector:(const double *)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x0030000000ae8f15
- (void)ui_encodePlatformPoint:(struct CGPoint)arg1 forKey:(id)arg2;	// IMP=0x0030000000b28bdc
- (struct CGPoint)ui_decodePlatformPointForKey:(id)arg1;	// IMP=0x0030000000b28bca
- (void)ui_encodePlatformSize:(struct CGSize)arg1 forKey:(id)arg2;	// IMP=0x0030000000ed7c04
- (struct CGSize)ui_decodePlatformSizeForKey:(id)arg1;	// IMP=0x0030000000ed7b71
- (void)ui_encodeCAPoint3D:(struct CAPoint3D)arg1 forKey:(id)arg2;	// IMP=0x0030000000f55ffc
- (struct CAPoint3D)ui_decodeCAPoint3DForKey:(id)arg1;	// IMP=0x0030000000f55f7c
- (id)_ui_decodeTextAttributesForKey:(id)arg1;	// IMP=0x0030000000ff8caf
- (void)_ui_encodeTextAttributes:(id)arg1 forKey:(id)arg2;	// IMP=0x0030000000ff8c0d
- (_Bool)_ui_decodeBoolForKey:(id)arg1 defaultValue:(_Bool)arg2;	// IMP=0x0030000000ff8bad
- (_Bool)_ui_isInterprocess;	// IMP=0x0030000000ff8b84
@end

