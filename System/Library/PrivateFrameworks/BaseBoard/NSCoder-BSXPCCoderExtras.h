//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@class NSString;

@interface NSCoder (BSXPCCoderExtras)
- (unsigned long long)decodeUInt64ForKey:(id)arg1;	// IMP=0x0020000000080128
- (struct CGRect)decodeCGRectForKey:(id)arg1;	// IMP=0x0020000000080109
- (struct CGSize)decodeCGSizeForKey:(id)arg1;	// IMP=0x00200000000800f7
- (struct CGPoint)decodeCGPointForKey:(id)arg1;	// IMP=0x00200000000800e5
- (id)decodeStringForKey:(id)arg1;	// IMP=0x00200000000800b2
- (id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3;	// IMP=0x002000000007ffc1
- (void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2;	// IMP=0x002000000007ffaf
- (void)encodeCGRect:(struct CGRect)arg1 forKey:(id)arg2;	// IMP=0x002000000007ff9d
- (void)encodeCGSize:(struct CGSize)arg1 forKey:(id)arg2;	// IMP=0x002000000007ff8b
- (void)encodeCGPoint:(struct CGPoint)arg1 forKey:(id)arg2;	// IMP=0x002000000007ff79
- (void)encodeCollection:(id)arg1 forKey:(id)arg2;	// IMP=0x002000000007fee7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

