/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GeolocationCoreLocationDelegate;



@interface WebGeolocationManagerPrivate : NSObject 
{

  /* Error parsing encoded ivar type info: ^{GeolocationManager={RetainPtr<GeolocationCoreLocationDelegate>="m_ptr"@"GeolocationCoreLocationDelegate"}{HashSet<WebCore::GeolocationLink*,WTF::PtrHash<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*> >="m_impl"{HashTable<WebCore::GeolocationLink*,WebCore::GeolocationLink*,WTF::IdentityExtractor<WebCore::GeolocationLink*>,WTF::PtrHash<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*> >="m_table"^^{GeolocationLink}"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}}B{RefPtr<WebCore::Geoposition>="m_ptr"^{Geoposition}}{RefPtr<WebCore::PositionError>="m_ptr"^{PositionError}}} */
    struct GeolocationManager { struct RetainPtr<GeolocationCoreLocationDelegate> { 
            GeolocationCoreLocationDelegate *m_ptr; 
        } x1; struct HashSet<WebCore::GeolocationLink*,WTF::PtrHash<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*> > { 
            struct HashTable<WebCore::GeolocationLink*,WebCore::GeolocationLink*,WTF::IdentityExtractor<WebCore::GeolocationLink*>,WTF::PtrHash<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*> > { 
                struct GeolocationLink {} **m_table; 
                NSInteger m_tableSize; 
                NSInteger m_tableSizeMask; 
                NSInteger m_keyCount; 
                NSInteger m_deletedCount; 
            } m_impl; 
        } x2; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x3; struct RefPtr<WebCore::Geoposition> { 
            struct Geoposition {} *m_ptr; 
        } x4; struct RefPtr<WebCore::PositionError> { 
            struct PositionError {} *m_ptr; 
        } x5; } *geolocationManager;

}


- (id)_initWithGeolocationManager:(struct GeolocationManager { struct RetainPtr<GeolocationCoreLocationDelegate> { id x_1_1_1; } x1; struct HashSet<WebCore::GeolocationLink*,WTF::PtrHash<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*> > { struct HashTable<WebCore::GeolocationLink*,WebCore::GeolocationLink*,WTF::IdentityExtractor<WebCore::GeolocationLink*>,WTF::PtrHash<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*> > { struct GeolocationLink {} **x_1_2_1; NSInteger x_1_2_2; NSInteger x_1_2_3; NSInteger x_1_2_4; NSInteger x_1_2_5; } x_2_1_1; } x2; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x3; struct RefPtr<WebCore::Geoposition> { struct Geoposition {} *x_4_1_1; } x4; struct RefPtr<WebCore::PositionError> { struct PositionError {} *x_5_1_1; } x5; }*)arg1;
     /* Encoded args for previous method: @12@0:4^{GeolocationManager={RetainPtr<GeolocationCoreLocationDelegate>=@}{HashSet<WebCore::GeolocationLink*,WTF::PtrHash<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*> >={HashTable<WebCore::GeolocationLink*,WebCore::GeolocationLink*,WTF::IdentityExtractor<WebCore::GeolocationLink*>,WTF::PtrHash<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*> >=^^{GeolocationLink}iiii}}B{RefPtr<WebCore::Geoposition>=^{Geoposition}}{RefPtr<WebCore::PositionError>=^{PositionError}}}8 */

- (struct GeolocationManager { struct RetainPtr<GeolocationCoreLocationDelegate> { id x_1_1_1; } x1; struct HashSet<WebCore::GeolocationLink*,WTF::PtrHash<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*> > { struct HashTable<WebCore::GeolocationLink*,WebCore::GeolocationLink*,WTF::IdentityExtractor<WebCore::GeolocationLink*>,WTF::PtrHash<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*> > { struct GeolocationLink {} **x_1_2_1; NSInteger x_1_2_2; NSInteger x_1_2_3; NSInteger x_1_2_4; NSInteger x_1_2_5; } x_2_1_1; } x2; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x3; struct RefPtr<WebCore::Geoposition> { struct Geoposition {} *x_4_1_1; } x4; struct RefPtr<WebCore::PositionError> { struct PositionError {} *x_5_1_1; } x5; }*)geolocationManager;
     /* Encoded args for previous method: ^{GeolocationManager={RetainPtr<GeolocationCoreLocationDelegate>=@}{HashSet<WebCore::GeolocationLink*,WTF::PtrHash<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*> >={HashTable<WebCore::GeolocationLink*,WebCore::GeolocationLink*,WTF::IdentityExtractor<WebCore::GeolocationLink*>,WTF::PtrHash<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*> >=^^{GeolocationLink}iiii}}B{RefPtr<WebCore::Geoposition>=^{Geoposition}}{RefPtr<WebCore::PositionError>=^{PositionError}}}8@0:4 */


@end