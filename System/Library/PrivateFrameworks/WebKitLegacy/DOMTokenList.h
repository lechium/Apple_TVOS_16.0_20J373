//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DOMObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DOMTokenList : DOMObject
{
}

- (_Bool)toggle:(id)arg1 force:(_Bool)arg2;	// IMP=0x0000000000096050
- (_Bool)contains:(id)arg1;	// IMP=0x0000000000095f00
- (id)item:(unsigned int)arg1;	// IMP=0x0000000000095de0
@property(copy) NSString *value;
@property(readonly) unsigned int length;
- (void)dealloc;	// IMP=0x0000000000095a20

@end
