//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (TRI)
+ (id)triHashStrings:(id)arg1 withDataSalt:(id)arg2;	// IMP=0x0080000000024306
- (_Bool)triIsPathSafePlausibleUniqueId;	// IMP=0x0010000000024fd8
- (_Bool)triIsPathSafe;	// IMP=0x0010000000024f60
- (id)triStringByResolvingSymlinksInPath;	// IMP=0x0010000000024db1
- (id)triTrim;	// IMP=0x0010000000024d4b
- (id)triFilenameForFactorName;	// IMP=0x0010000000024c7c
- (id)triSanitizedPathComponentWithMaxLength:(unsigned long long)arg1 addHash:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000024760
- (unsigned long long)triJavaHash;	// IMP=0x00100000000246cf
- (id)triHashWithDataSalt:(id)arg1;	// IMP=0x001000000002416a
- (id)triHashWithIntegerSalt:(unsigned long long)arg1;	// IMP=0x00100000000240f5
@end

