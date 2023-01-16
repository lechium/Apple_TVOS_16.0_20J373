//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CADAccountAccessHandler.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface CADAllowSpecifiedAccountsAccessHandler : CADAccountAccessHandler
{
    NSSet *_restrictedCalendarRowIDs;	// 8 = 0x8
    NSSet *_allowedSourceIdentifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000004310
@property(readonly, nonatomic) NSSet *allowedSourceIdentifiers; // @synthesize allowedSourceIdentifiers=_allowedSourceIdentifiers;
- (_Bool)isActionAllowed:(unsigned long long)arg1 forStore:(const void *)arg2 inDatabase:(struct CalDatabase *)arg3;	// IMP=0x0000000000004257
- (id)initWithAllowedSourceIdentifiers:(id)arg1 databaseDataProvider:(id)arg2;	// IMP=0x00000000000041c4

@end

