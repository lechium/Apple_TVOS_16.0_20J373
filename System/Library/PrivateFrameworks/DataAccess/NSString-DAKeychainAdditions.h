//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (DAKeychainAdditions)
+ (id)da_new64ByteGUID;	// IMP=0x0050000000024b89
+ (id)da_newGUID;	// IMP=0x0050000000024b32
- (id)stringByURLQuoting;	// IMP=0x001000000001535d
- (id)da_trimWhiteSpace;	// IMP=0x0010000000024aea
- (_Bool)da_hasPrefixCaseInsensitive:(id)arg1;	// IMP=0x0010000000024ac2
- (id)da_stringByURLEscapingPathComponent;	// IMP=0x0010000000024a50
- (id)da_appendSlashIfNeeded;	// IMP=0x00100000000249f7
- (id)da_removeSlashIfNeeded;	// IMP=0x0010000000024991
- (id)da_stringByRemovingPercentEscapesForUsername;	// IMP=0x001000000002495d
- (id)da_stringByAddingPercentEscapesForUsername;	// IMP=0x001000000002491c
- (id)da_absoluteURLForChildLeastInfoRepresentationRelativeToParentURL:(id)arg1;	// IMP=0x0010000000026fe7
@end
