//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (SHError)
@property(readonly, nonatomic) _Bool sh_isMediaLibraryError;
@property(readonly, nonatomic) _Bool sh_isInternalError;
@property(readonly, nonatomic) _Bool sh_isMediaLibrarySyncFailed;
@property(readonly, nonatomic) _Bool sh_isCustomCatalogInvalidURL;
@property(readonly, nonatomic) _Bool sh_isCustomCatalogInvalid;
@property(readonly, nonatomic) _Bool sh_isMatchAttemptFailed;
@property(readonly, nonatomic) _Bool sh_isSignatureDurationInvalid;
@property(readonly, nonatomic) _Bool sh_isSignatureInvalid;
@property(readonly, nonatomic) _Bool sh_isAudioDiscontinuity;
@property(readonly, nonatomic) _Bool sh_isInvalidAudioFormat;
- (_Bool)isShazamPublicErrorWithCode:(long long)arg1;	// IMP=0x0030000000003551
@property(readonly, nonatomic) _Bool sh_isShazamKitPublicError;
@end

