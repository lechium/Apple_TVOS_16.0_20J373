//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVCKBookmark.h"

__attribute__((visibility("hidden")))
@interface TVCKMutableBookmark : TVCKBookmark
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0080000000047c67
- (void)setIsMarkedAsUnwatched:(_Bool)arg1;	// IMP=0x0000000000047d46
- (void)setHasBeenRented:(_Bool)arg1;	// IMP=0x0000000000047d34
- (void)setHasBeenPlayed:(_Bool)arg1;	// IMP=0x0000000000047d22
- (void)setPlayCount:(unsigned long long)arg1;	// IMP=0x0000000000047d10
- (void)setBookmarkTimestamp:(id)arg1;	// IMP=0x0000000000047ce0
- (void)setBookmarkTime:(double)arg1;	// IMP=0x0000000000047c6f

@end

