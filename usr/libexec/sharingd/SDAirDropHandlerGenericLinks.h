//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSAppLink;

@interface SDAirDropHandlerGenericLinks
{
    LSAppLink *_appLink;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000008c2d8
@property(retain, nonatomic) LSAppLink *appLink; // @synthesize appLink=_appLink;
- (void)updatePossibleActions;	// IMP=0x001000000008c003
- (id)suitableContentsDescription;	// IMP=0x001000000008bdd1
- (long long)transferTypes;	// IMP=0x001000000008bd9c
- (_Bool)canHandleTransfer;	// IMP=0x001000000008bd87

@end

