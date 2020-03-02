#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class CommonSqldelight_runtimeTransacterTransaction, CommonTestDbAdapter, CommonTestEntityGender, CommonTestDbImpl, CommonSqldelight_runtimeQuery, CommonTestApi, CommonKotlinEnum, CommonGender, CommonLogin, CommonName, CommonPicture, CommonTestModel, CommonTestResponseModel, CommonTestEntity, CommonTestUseCase, CommonKotlinAbstractCoroutineContextElement, CommonKotlinx_coroutines_coreCoroutineDispatcher, CommonResult, CommonErrorEntity, CommonResultError, CommonResultSuccess, CommonUseCaseParameters, CommonUseCase, CommonTestUseCaseParameters, CommonKotlinThrowable, CommonKotlinArray, CommonErrorEntityAccessDenied, CommonErrorEntityBadRequest, CommonErrorEntityNetwork, CommonErrorEntityNotFound, CommonErrorEntityUnauthorized, CommonErrorEntityUnavailable, CommonErrorEntityUnknown, CommonKodein_di_coreKodeinTrigger, CommonKotlinByteArray, CommonKotlinx_serialization_runtimeSerialKind, CommonKotlinNothing, CommonKotlinx_serialization_runtimeUpdateMode, CommonKodein_di_coreKodeinKey, CommonKotlinByteIterator, CommonKotlinTriple, CommonKodein_di_coreSearchSpecs, CommonKodein_di_coreKodeinDefinition, CommonKodein_di_coreKodeinDefining, CommonKodein_di_coreScopeRegistry, CommonKodein_di_coreReference;

@protocol CommonTestQueries, CommonSqldelight_runtimeTransacter, CommonTestDatabase, CommonSqldelight_runtimeSqlDriver, CommonSqldelight_runtimeSqlDriverSchema, CommonSqldelight_runtimeColumnAdapter, CommonTestDb, CommonTestRepository, CommonKotlinComparable, CommonKotlinx_serialization_runtimeKSerializer, CommonKotlinCoroutineContextKey, CommonKotlinCoroutineContextElement, CommonKotlinCoroutineContext, CommonKotlinContinuation, CommonKotlinContinuationInterceptor, CommonKotlinx_coroutines_coreRunnable, CommonKotlinx_coroutines_coreCoroutineScope, CommonKodein_di_coreKodein, CommonSqldelight_runtimeSqlPreparedStatement, CommonSqldelight_runtimeSqlCursor, CommonSqldelight_runtimeCloseable, CommonSqldelight_runtimeQueryListener, CommonKotlinx_serialization_runtimeEncoder, CommonKotlinx_serialization_runtimeSerialDescriptor, CommonKotlinx_serialization_runtimeSerializationStrategy, CommonKotlinx_serialization_runtimeDecoder, CommonKotlinx_serialization_runtimeDeserializationStrategy, CommonKotlinIterator, CommonKodein_di_coreKodeinContainer, CommonKodein_di_coreKodeinContext, CommonKodein_di_coreKodeinAware, CommonKotlinx_serialization_runtimeCompositeEncoder, CommonKotlinx_serialization_runtimeSerialModule, CommonKotlinAnnotation, CommonKotlinx_serialization_runtimeCompositeDecoder, CommonKodein_di_coreKodeinTree, CommonKodein_di_coreTypeToken, CommonKotlinLazy, CommonKotlinx_serialization_runtimeSerialModuleCollector, CommonKotlinKClass, CommonKodein_di_coreExternalSource, CommonKodein_di_coreContextTranslator, CommonKotlinKDeclarationContainer, CommonKotlinKAnnotatedElement, CommonKotlinKClassifier, CommonKodein_di_coreKodeinBinding, CommonKodein_di_coreBindingKodein, CommonKodein_di_coreKodeinBindingCopier, CommonKodein_di_coreScope, CommonKodein_di_coreBinding, CommonKodein_di_coreDKodein, CommonKodein_di_coreDKodeinAware, CommonKodein_di_coreDKodeinBase, CommonKodein_di_coreWithContext, CommonKodein_di_coreSimpleBindingKodein, CommonKodein_di_coreKodeinContainerBuilder, CommonKodein_di_coreScopeCloseable;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wnullability"

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface CommonMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface CommonMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface CommonNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface CommonByte : CommonNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface CommonUByte : CommonNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface CommonShort : CommonNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface CommonUShort : CommonNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface CommonInt : CommonNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface CommonUInt : CommonNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface CommonLong : CommonNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface CommonULong : CommonNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface CommonFloat : CommonNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface CommonDouble : CommonNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface CommonBoolean : CommonNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("Sqldelight_runtimeTransacter")))
@protocol CommonSqldelight_runtimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(CommonSqldelight_runtimeTransacterTransaction *))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
@end;

__attribute__((swift_name("TestDatabase")))
@protocol CommonTestDatabase <CommonSqldelight_runtimeTransacter>
@required
@property (readonly) id<CommonTestQueries> testQueries __attribute__((swift_name("testQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestDatabaseCompanion")))
@interface CommonTestDatabaseCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonTestDatabase>)invokeDriver:(id<CommonSqldelight_runtimeSqlDriver>)driver TestDbAdapter:(CommonTestDbAdapter *)TestDbAdapter __attribute__((swift_name("invoke(driver:TestDbAdapter:)")));
@property (readonly) id<CommonSqldelight_runtimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((swift_name("TestDb")))
@protocol CommonTestDb
@required
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) CommonTestEntityGender *gender __attribute__((swift_name("gender")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *last_name __attribute__((swift_name("last_name")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *picture_url __attribute__((swift_name("picture_url")));
@property (readonly) NSString *user_name __attribute__((swift_name("user_name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestDbAdapter")))
@interface CommonTestDbAdapter : KotlinBase
- (instancetype)initWithGenderAdapter:(id<CommonSqldelight_runtimeColumnAdapter>)genderAdapter __attribute__((swift_name("init(genderAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<CommonSqldelight_runtimeColumnAdapter> genderAdapter __attribute__((swift_name("genderAdapter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestDbImpl")))
@interface CommonTestDbImpl : KotlinBase <CommonTestDb>
- (instancetype)initWithId:(NSString *)id name:(NSString *)name last_name:(NSString *)last_name user_name:(NSString *)user_name email:(NSString *)email gender:(CommonTestEntityGender *)gender picture_url:(NSString *)picture_url __attribute__((swift_name("init(id:name:last_name:user_name:email:gender:picture_url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (CommonTestEntityGender *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (CommonTestDbImpl *)doCopyId:(NSString *)id name:(NSString *)name last_name:(NSString *)last_name user_name:(NSString *)user_name email:(NSString *)email gender:(CommonTestEntityGender *)gender picture_url:(NSString *)picture_url __attribute__((swift_name("doCopy(id:name:last_name:user_name:email:gender:picture_url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) CommonTestEntityGender *gender __attribute__((swift_name("gender")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *last_name __attribute__((swift_name("last_name")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *picture_url __attribute__((swift_name("picture_url")));
@property (readonly) NSString *user_name __attribute__((swift_name("user_name")));
@end;

__attribute__((swift_name("TestQueries")))
@protocol CommonTestQueries <CommonSqldelight_runtimeTransacter>
@required
- (void)insertEntityId:(NSString *)id name:(NSString *)name last_name:(NSString *)last_name user_name:(NSString *)user_name email:(NSString *)email gender:(CommonTestEntityGender *)gender picture_url:(NSString *)picture_url __attribute__((swift_name("insertEntity(id:name:last_name:user_name:email:gender:picture_url:)")));
- (void)insertModelTestDb:(id<CommonTestDb>)TestDb __attribute__((swift_name("insertModel(TestDb:)")));
- (CommonSqldelight_runtimeQuery *)selectAll __attribute__((swift_name("selectAll()")));
- (CommonSqldelight_runtimeQuery *)selectAllMapper:(id (^)(NSString *, NSString *, NSString *, NSString *, NSString *, CommonTestEntityGender *, NSString *))mapper __attribute__((swift_name("selectAll(mapper:)")));
@end;

__attribute__((swift_name("TestRepository")))
@protocol CommonTestRepository
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestDataRepository")))
@interface CommonTestDataRepository : KotlinBase <CommonTestRepository>
- (instancetype)initWithApi:(CommonTestApi *)api db:(id<CommonTestDatabase>)db __attribute__((swift_name("init(api:db:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol CommonKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface CommonKotlinEnum : KotlinBase <CommonKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(CommonKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Gender")))
@interface CommonGender : CommonKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CommonGender *male __attribute__((swift_name("male")));
@property (class, readonly) CommonGender *female __attribute__((swift_name("female")));
- (int32_t)compareToOther:(CommonGender *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Gender.Companion")))
@interface CommonGenderCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Login")))
@interface CommonLogin : KotlinBase
- (instancetype)initWithMd5:(NSString *)md5 password:(NSString *)password salt:(NSString *)salt sha1:(NSString *)sha1 sha256:(NSString *)sha256 username:(NSString *)username uuid:(NSString *)uuid __attribute__((swift_name("init(md5:password:salt:sha1:sha256:username:uuid:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (CommonLogin *)doCopyMd5:(NSString *)md5 password:(NSString *)password salt:(NSString *)salt sha1:(NSString *)sha1 sha256:(NSString *)sha256 username:(NSString *)username uuid:(NSString *)uuid __attribute__((swift_name("doCopy(md5:password:salt:sha1:sha256:username:uuid:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *md5 __attribute__((swift_name("md5")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@property (readonly) NSString *salt __attribute__((swift_name("salt")));
@property (readonly) NSString *sha1 __attribute__((swift_name("sha1")));
@property (readonly) NSString *sha256 __attribute__((swift_name("sha256")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Login.Companion")))
@interface CommonLoginCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Name")))
@interface CommonName : KotlinBase
- (instancetype)initWithFirst:(NSString *)first last:(NSString *)last title:(NSString *)title __attribute__((swift_name("init(first:last:title:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (CommonName *)doCopyFirst:(NSString *)first last:(NSString *)last title:(NSString *)title __attribute__((swift_name("doCopy(first:last:title:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *first __attribute__((swift_name("first")));
@property (readonly) NSString *last __attribute__((swift_name("last")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Name.Companion")))
@interface CommonNameCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Picture")))
@interface CommonPicture : KotlinBase
- (instancetype)initWithLarge:(NSString *)large medium:(NSString *)medium thumbnail:(NSString *)thumbnail __attribute__((swift_name("init(large:medium:thumbnail:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (CommonPicture *)doCopyLarge:(NSString *)large medium:(NSString *)medium thumbnail:(NSString *)thumbnail __attribute__((swift_name("doCopy(large:medium:thumbnail:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *large __attribute__((swift_name("large")));
@property (readonly) NSString *medium __attribute__((swift_name("medium")));
@property (readonly) NSString *thumbnail __attribute__((swift_name("thumbnail")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Picture.Companion")))
@interface CommonPictureCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestModel")))
@interface CommonTestModel : KotlinBase
- (instancetype)initWithCell:(NSString *)cell email:(NSString *)email gender:(CommonGender *)gender name:(CommonName *)name phone:(NSString *)phone picture:(CommonPicture *)picture login:(CommonLogin *)login __attribute__((swift_name("init(cell:email:gender:name:phone:picture:login:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (CommonGender *)component3 __attribute__((swift_name("component3()")));
- (CommonName *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (CommonPicture *)component6 __attribute__((swift_name("component6()")));
- (CommonLogin *)component7 __attribute__((swift_name("component7()")));
- (CommonTestModel *)doCopyCell:(NSString *)cell email:(NSString *)email gender:(CommonGender *)gender name:(CommonName *)name phone:(NSString *)phone picture:(CommonPicture *)picture login:(CommonLogin *)login __attribute__((swift_name("doCopy(cell:email:gender:name:phone:picture:login:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cell __attribute__((swift_name("cell")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) CommonGender *gender __attribute__((swift_name("gender")));
@property (readonly) CommonLogin *login __attribute__((swift_name("login")));
@property (readonly) CommonName *name __attribute__((swift_name("name")));
@property (readonly) NSString *phone __attribute__((swift_name("phone")));
@property (readonly) CommonPicture *picture __attribute__((swift_name("picture")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestModel.Companion")))
@interface CommonTestModelCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestResponseModel")))
@interface CommonTestResponseModel : KotlinBase
- (instancetype)initWithResults:(NSArray<CommonTestModel *> *)results __attribute__((swift_name("init(results:)"))) __attribute__((objc_designated_initializer));
- (NSArray<CommonTestModel *> *)component1 __attribute__((swift_name("component1()")));
- (CommonTestResponseModel *)doCopyResults:(NSArray<CommonTestModel *> *)results __attribute__((swift_name("doCopy(results:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<CommonTestModel *> *results __attribute__((swift_name("results")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestResponseModel.Companion")))
@interface CommonTestResponseModelCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<CommonKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestMapper")))
@interface CommonTestMapper : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)testMapper __attribute__((swift_name("init()")));
- (CommonTestEntity *)fromDbToEntityData:(id<CommonTestDb>)data __attribute__((swift_name("fromDbToEntity(data:)")));
- (id<CommonTestDb>)fromEntityToDbData:(CommonTestEntity *)data __attribute__((swift_name("fromEntityToDb(data:)")));
- (CommonTestEntity *)fromModelToEntityData:(CommonTestModel *)data __attribute__((swift_name("fromModelToEntity(data:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestApi")))
@interface CommonTestApi : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestDi")))
@interface CommonTestDi : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)testDi __attribute__((swift_name("init()")));
@property (readonly) CommonTestUseCase *testUseCase __attribute__((swift_name("testUseCase")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol CommonKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<CommonKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<CommonKotlinCoroutineContextElement> _Nullable)getKey:(id<CommonKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<CommonKotlinCoroutineContext>)minusKeyKey:(id<CommonKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<CommonKotlinCoroutineContext>)plusContext:(id<CommonKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol CommonKotlinCoroutineContextElement <CommonKotlinCoroutineContext>
@required
@property (readonly) id<CommonKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface CommonKotlinAbstractCoroutineContextElement : KotlinBase <CommonKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<CommonKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<CommonKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol CommonKotlinContinuationInterceptor <CommonKotlinCoroutineContextElement>
@required
- (id<CommonKotlinContinuation>)interceptContinuationContinuation:(id<CommonKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<CommonKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface CommonKotlinx_coroutines_coreCoroutineDispatcher : CommonKotlinAbstractCoroutineContextElement <CommonKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<CommonKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<CommonKotlinCoroutineContext>)context block:(id<CommonKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<CommonKotlinCoroutineContext>)context block:(id<CommonKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<CommonKotlinContinuation>)interceptContinuationContinuation:(id<CommonKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<CommonKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (CommonKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher the left of `+`.")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BackgroundDispatcher")))
@interface CommonBackgroundDispatcher : CommonKotlinx_coroutines_coreCoroutineDispatcher
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)backgroundDispatcher __attribute__((swift_name("init()")));
- (void)dispatchContext:(id<CommonKotlinCoroutineContext>)context block:(id<CommonKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainDispatcher")))
@interface CommonMainDispatcher : CommonKotlinx_coroutines_coreCoroutineDispatcher
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)mainDispatcher __attribute__((swift_name("init()")));
- (void)dispatchContext:(id<CommonKotlinCoroutineContext>)context block:(id<CommonKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
@end;

__attribute__((swift_name("Result")))
@interface CommonResult : KotlinBase
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Result.Error")))
@interface CommonResultError : CommonResult
- (instancetype)initWithError:(CommonErrorEntity *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (CommonErrorEntity *)component1 __attribute__((swift_name("component1()")));
- (CommonResultError *)doCopyError:(CommonErrorEntity *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonErrorEntity *error __attribute__((swift_name("error")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Result.Loading")))
@interface CommonResultLoading : CommonResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loading __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Result.Success")))
@interface CommonResultSuccess : CommonResult
- (instancetype)initWithData:(id _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (CommonResultSuccess *)doCopyData:(id _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id _Nullable data __attribute__((swift_name("data")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol CommonKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<CommonKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("UseCase")))
@interface CommonUseCase : KotlinBase <CommonKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)executeParameters:(CommonUseCaseParameters *)parameters onSuccess:(void (^)(id))onSuccess onError:(void (^)(CommonErrorEntity *))onError __attribute__((swift_name("execute(parameters:onSuccess:onError:)")));
@property (readonly) id<CommonKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestUseCase")))
@interface CommonTestUseCase : CommonUseCase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)executeParameters:(CommonTestUseCaseParameters *)parameters onSuccess:(void (^)(NSArray<CommonTestEntity *> *))onSuccess onError:(void (^)(CommonErrorEntity *))onError __attribute__((swift_name("execute(parameters:onSuccess:onError:)")));
@end;

__attribute__((swift_name("UseCase.Parameters")))
@interface CommonUseCaseParameters : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestUseCase.Parameters")))
@interface CommonTestUseCaseParameters : CommonUseCaseParameters
- (instancetype)initWithTest:(NSString *)test __attribute__((swift_name("init(test:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (CommonTestUseCaseParameters *)doCopyTest:(NSString *)test __attribute__((swift_name("doCopy(test:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *test __attribute__((swift_name("test")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UseCase.None")))
@interface CommonUseCaseNone : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)none __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface CommonKotlinThrowable : KotlinBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (CommonKotlinArray *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("ErrorEntity")))
@interface CommonErrorEntity : CommonKotlinThrowable
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) CommonKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorEntity.AccessDenied")))
@interface CommonErrorEntityAccessDenied : CommonErrorEntity
- (instancetype)initWithThrowable:(CommonKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
- (CommonKotlinThrowable *)component1 __attribute__((swift_name("component1()")));
- (CommonErrorEntityAccessDenied *)doCopyThrowable:(CommonKotlinThrowable *)throwable __attribute__((swift_name("doCopy(throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorEntity.BadRequest")))
@interface CommonErrorEntityBadRequest : CommonErrorEntity
- (instancetype)initWithThrowable:(CommonKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
- (CommonKotlinThrowable *)component1 __attribute__((swift_name("component1()")));
- (CommonErrorEntityBadRequest *)doCopyThrowable:(CommonKotlinThrowable *)throwable __attribute__((swift_name("doCopy(throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorEntity.Network")))
@interface CommonErrorEntityNetwork : CommonErrorEntity
- (instancetype)initWithThrowable:(CommonKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
- (CommonKotlinThrowable *)component1 __attribute__((swift_name("component1()")));
- (CommonErrorEntityNetwork *)doCopyThrowable:(CommonKotlinThrowable *)throwable __attribute__((swift_name("doCopy(throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorEntity.NotFound")))
@interface CommonErrorEntityNotFound : CommonErrorEntity
- (instancetype)initWithThrowable:(CommonKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
- (CommonKotlinThrowable *)component1 __attribute__((swift_name("component1()")));
- (CommonErrorEntityNotFound *)doCopyThrowable:(CommonKotlinThrowable *)throwable __attribute__((swift_name("doCopy(throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorEntity.Unauthorized")))
@interface CommonErrorEntityUnauthorized : CommonErrorEntity
- (instancetype)initWithThrowable:(CommonKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
- (CommonKotlinThrowable *)component1 __attribute__((swift_name("component1()")));
- (CommonErrorEntityUnauthorized *)doCopyThrowable:(CommonKotlinThrowable *)throwable __attribute__((swift_name("doCopy(throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorEntity.Unavailable")))
@interface CommonErrorEntityUnavailable : CommonErrorEntity
- (instancetype)initWithThrowable:(CommonKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
- (CommonKotlinThrowable *)component1 __attribute__((swift_name("component1()")));
- (CommonErrorEntityUnavailable *)doCopyThrowable:(CommonKotlinThrowable *)throwable __attribute__((swift_name("doCopy(throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorEntity.Unknown")))
@interface CommonErrorEntityUnknown : CommonErrorEntity
- (instancetype)initWithThrowable:(CommonKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
- (CommonKotlinThrowable *)component1 __attribute__((swift_name("component1()")));
- (CommonErrorEntityUnknown *)doCopyThrowable:(CommonKotlinThrowable *)throwable __attribute__((swift_name("doCopy(throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestEntity")))
@interface CommonTestEntity : KotlinBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name surname:(NSString *)surname username:(NSString *)username email:(NSString *)email gender:(CommonTestEntityGender *)gender profilePictureUrl:(NSString *)profilePictureUrl __attribute__((swift_name("init(id:name:surname:username:email:gender:profilePictureUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (CommonTestEntityGender *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (CommonTestEntity *)doCopyId:(NSString *)id name:(NSString *)name surname:(NSString *)surname username:(NSString *)username email:(NSString *)email gender:(CommonTestEntityGender *)gender profilePictureUrl:(NSString *)profilePictureUrl __attribute__((swift_name("doCopy(id:name:surname:username:email:gender:profilePictureUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) CommonTestEntityGender *gender __attribute__((swift_name("gender")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *profilePictureUrl __attribute__((swift_name("profilePictureUrl")));
@property (readonly) NSString *surname __attribute__((swift_name("surname")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestEntity.Gender")))
@interface CommonTestEntityGender : CommonKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CommonTestEntityGender *male __attribute__((swift_name("male")));
@property (class, readonly) CommonTestEntityGender *female __attribute__((swift_name("female")));
- (int32_t)compareToOther:(CommonTestEntityGender *)other __attribute__((swift_name("compareTo(other:)")));
@end;

@interface CommonResult (Extensions)
- (id _Nullable)successValue __attribute__((swift_name("successValue()")));
@property (readonly) BOOL succeeded __attribute__((swift_name("succeeded")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestDiKt")))
@interface CommonTestDiKt : KotlinBase
@property (class, readonly) id<CommonKodein_di_coreKodein> testKodein __attribute__((swift_name("testKodein")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseDriverKt")))
@interface CommonDatabaseDriverKt : KotlinBase
+ (id<CommonSqldelight_runtimeSqlDriver>)getDriver __attribute__((swift_name("getDriver()")));
@end;

__attribute__((swift_name("Sqldelight_runtimeTransacterTransaction")))
@interface CommonSqldelight_runtimeTransacterTransaction : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(CommonSqldelight_runtimeTransacterTransaction *))body __attribute__((swift_name("transaction(body:)")));
@property (readonly) CommonSqldelight_runtimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("Sqldelight_runtimeCloseable")))
@protocol CommonSqldelight_runtimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Sqldelight_runtimeSqlDriver")))
@protocol CommonSqldelight_runtimeSqlDriver <CommonSqldelight_runtimeCloseable>
@required
- (CommonSqldelight_runtimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(CommonInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<CommonSqldelight_runtimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<CommonSqldelight_runtimeSqlCursor>)executeQueryIdentifier:(CommonInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<CommonSqldelight_runtimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (CommonSqldelight_runtimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("Sqldelight_runtimeSqlDriverSchema")))
@protocol CommonSqldelight_runtimeSqlDriverSchema
@required
- (void)createDriver:(id<CommonSqldelight_runtimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<CommonSqldelight_runtimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("Sqldelight_runtimeColumnAdapter")))
@protocol CommonSqldelight_runtimeColumnAdapter
@required
- (id)decodeDatabaseValue:(id _Nullable)databaseValue __attribute__((swift_name("decode(databaseValue:)")));
- (id _Nullable)encodeValue:(id)value __attribute__((swift_name("encode(value:)")));
@end;

__attribute__((swift_name("Sqldelight_runtimeQuery")))
@interface CommonSqldelight_runtimeQuery : KotlinBase
- (instancetype)initWithQueries:(NSMutableArray<CommonSqldelight_runtimeQuery *> *)queries mapper:(id (^)(id<CommonSqldelight_runtimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<CommonSqldelight_runtimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<CommonSqldelight_runtimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<id> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (id)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (id _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<CommonSqldelight_runtimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) id (^mapper)(id<CommonSqldelight_runtimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerializationStrategy")))
@protocol CommonKotlinx_serialization_runtimeSerializationStrategy
@required
- (void)serializeEncoder:(id<CommonKotlinx_serialization_runtimeEncoder>)encoder obj:(id _Nullable)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<CommonKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDeserializationStrategy")))
@protocol CommonKotlinx_serialization_runtimeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<CommonKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<CommonKotlinx_serialization_runtimeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<CommonKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeKSerializer")))
@protocol CommonKotlinx_serialization_runtimeKSerializer <CommonKotlinx_serialization_runtimeSerializationStrategy, CommonKotlinx_serialization_runtimeDeserializationStrategy>
@required
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol CommonKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol CommonKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<CommonKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol CommonKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface CommonKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(CommonInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<CommonKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kodein_di_coreKodeinAware")))
@protocol CommonKodein_di_coreKodeinAware
@required
@property (readonly) id<CommonKodein_di_coreKodein> kodein __attribute__((swift_name("kodein")));
@property (readonly) id<CommonKodein_di_coreKodeinContext> kodeinContext __attribute__((swift_name("kodeinContext")));
@property (readonly) CommonKodein_di_coreKodeinTrigger * _Nullable kodeinTrigger __attribute__((swift_name("kodeinTrigger")));
@end;

__attribute__((swift_name("Kodein_di_coreKodein")))
@protocol CommonKodein_di_coreKodein <CommonKodein_di_coreKodeinAware>
@required
@property (readonly) id<CommonKodein_di_coreKodeinContainer> container __attribute__((swift_name("container")));
@end;

__attribute__((swift_name("Sqldelight_runtimeSqlPreparedStatement")))
@protocol CommonSqldelight_runtimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index value:(CommonKotlinByteArray * _Nullable)value __attribute__((swift_name("bindBytes(index:value:)")));
- (void)bindDoubleIndex:(int32_t)index value:(CommonDouble * _Nullable)value __attribute__((swift_name("bindDouble(index:value:)")));
- (void)bindLongIndex:(int32_t)index value:(CommonLong * _Nullable)value __attribute__((swift_name("bindLong(index:value:)")));
- (void)bindStringIndex:(int32_t)index value:(NSString * _Nullable)value __attribute__((swift_name("bindString(index:value:)")));
@end;

__attribute__((swift_name("Sqldelight_runtimeSqlCursor")))
@protocol CommonSqldelight_runtimeSqlCursor <CommonSqldelight_runtimeCloseable>
@required
- (CommonKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (CommonDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (CommonLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Sqldelight_runtimeQueryListener")))
@protocol CommonSqldelight_runtimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeEncoder")))
@protocol CommonKotlinx_serialization_runtimeEncoder
@required
- (id<CommonKotlinx_serialization_runtimeCompositeEncoder>)beginCollectionDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(CommonKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<CommonKotlinx_serialization_runtimeCompositeEncoder>)beginStructureDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc typeParams:(CommonKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<CommonKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<CommonKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<CommonKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialDescriptor")))
@protocol CommonKotlinx_serialization_runtimeSerialDescriptor
@required
- (NSArray<id<CommonKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<CommonKotlinx_serialization_runtimeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<CommonKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) CommonKotlinx_serialization_runtimeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDecoder")))
@protocol CommonKotlinx_serialization_runtimeDecoder
@required
- (id<CommonKotlinx_serialization_runtimeCompositeDecoder>)beginStructureDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc typeParams:(CommonKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (CommonKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<CommonKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<CommonKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<CommonKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<CommonKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<CommonKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) CommonKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol CommonKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("Kodein_di_coreKodeinContainer")))
@protocol CommonKodein_di_coreKodeinContainer
@required
- (NSArray<id (^)(id _Nullable)> *)allFactoriesKey:(CommonKodein_di_coreKodeinKey *)key context:(id _Nullable)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("allFactories(key:context:overrideLevel:)")));
- (NSArray<id (^)(void)> *)allProvidersKey:(CommonKodein_di_coreKodeinKey *)key context:(id _Nullable)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("allProviders(key:context:overrideLevel:)")));
- (id (^)(id _Nullable))factoryKey:(CommonKodein_di_coreKodeinKey *)key context:(id _Nullable)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("factory(key:context:overrideLevel:)")));
- (id (^ _Nullable)(id _Nullable))factoryOrNullKey:(CommonKodein_di_coreKodeinKey *)key context:(id _Nullable)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("factoryOrNull(key:context:overrideLevel:)")));
- (id (^)(void))providerKey:(CommonKodein_di_coreKodeinKey *)key context:(id _Nullable)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("provider(key:context:overrideLevel:)")));
- (id (^ _Nullable)(void))providerOrNullKey:(CommonKodein_di_coreKodeinKey *)key context:(id _Nullable)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("providerOrNull(key:context:overrideLevel:)")));
@property (readonly) id<CommonKodein_di_coreKodeinTree> tree __attribute__((swift_name("tree")));
@end;

__attribute__((swift_name("Kodein_di_coreKodeinContext")))
@protocol CommonKodein_di_coreKodeinContext
@required
@property (readonly) id<CommonKodein_di_coreTypeToken> type __attribute__((swift_name("type")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_di_coreKodeinTrigger")))
@interface CommonKodein_di_coreKodeinTrigger : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@property (readonly) NSMutableArray<id<CommonKotlinLazy>> *properties __attribute__((swift_name("properties")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface CommonKotlinByteArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(CommonByte *(^)(CommonInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (CommonKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeEncoder")))
@protocol CommonKotlinx_serialization_runtimeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index serializer:(id<CommonKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:serializer:value:)")));
- (void)encodeSerializableElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index serializer:(id<CommonKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:serializer:value:)")));
- (void)encodeShortElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<CommonKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModule")))
@protocol CommonKotlinx_serialization_runtimeSerialModule
@required
- (void)dumpToCollector:(id<CommonKotlinx_serialization_runtimeSerialModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<CommonKotlinx_serialization_runtimeKSerializer> _Nullable)getContextualKclass:(id<CommonKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<CommonKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<CommonKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<CommonKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<CommonKotlinKClass>)baseClass serializedClassName:(NSString *)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol CommonKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialKind")))
@interface CommonKotlinx_serialization_runtimeSerialKind : KotlinBase
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeDecoder")))
@protocol CommonKotlinx_serialization_runtimeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<CommonKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(desc:index:deserializer:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<CommonKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(desc:index:deserializer:)")));
- (int16_t)decodeShortElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<CommonKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<CommonKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<CommonKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:deserializer:old:)")));
@property (readonly) id<CommonKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) CommonKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface CommonKotlinNothing : KotlinBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeUpdateMode")))
@interface CommonKotlinx_serialization_runtimeUpdateMode : CommonKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CommonKotlinx_serialization_runtimeUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) CommonKotlinx_serialization_runtimeUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) CommonKotlinx_serialization_runtimeUpdateMode *update __attribute__((swift_name("update")));
- (int32_t)compareToOther:(CommonKotlinx_serialization_runtimeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_di_coreKodeinKey")))
@interface CommonKodein_di_coreKodeinKey : KotlinBase
- (instancetype)initWithContextType:(id<CommonKodein_di_coreTypeToken>)contextType argType:(id<CommonKodein_di_coreTypeToken>)argType type:(id<CommonKodein_di_coreTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("init(contextType:argType:type:tag:)"))) __attribute__((objc_designated_initializer));
- (id<CommonKodein_di_coreTypeToken>)component1 __attribute__((swift_name("component1()")));
- (id<CommonKodein_di_coreTypeToken>)component2 __attribute__((swift_name("component2()")));
- (id<CommonKodein_di_coreTypeToken>)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (CommonKodein_di_coreKodeinKey *)doCopyContextType:(id<CommonKodein_di_coreTypeToken>)contextType argType:(id<CommonKodein_di_coreTypeToken>)argType type:(id<CommonKodein_di_coreTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("doCopy(contextType:argType:type:tag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CommonKodein_di_coreTypeToken> argType __attribute__((swift_name("argType")));
@property (readonly) NSString *bindDescription __attribute__((swift_name("bindDescription")));
@property (readonly) NSString *bindFullDescription __attribute__((swift_name("bindFullDescription")));
@property (readonly) id<CommonKodein_di_coreTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly, getter=description_) NSString *description __attribute__((swift_name("description")));
@property (readonly) NSString *fullDescription __attribute__((swift_name("fullDescription")));
@property (readonly) NSString *internalDescription __attribute__((swift_name("internalDescription")));
@property (readonly) id _Nullable tag __attribute__((swift_name("tag")));
@property (readonly) id<CommonKodein_di_coreTypeToken> type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Kodein_di_coreKodeinTree")))
@protocol CommonKodein_di_coreKodeinTree
@required
- (NSArray<CommonKotlinTriple *> *)findKey:(CommonKodein_di_coreKodeinKey *)key overrideLevel:(int32_t)overrideLevel all:(BOOL)all __attribute__((swift_name("find(key:overrideLevel:all:)")));
- (NSArray<CommonKotlinTriple *> *)findSearch:(CommonKodein_di_coreSearchSpecs *)search __attribute__((swift_name("find(search:)")));
- (CommonKotlinTriple * _Nullable)getKey_:(CommonKodein_di_coreKodeinKey *)key __attribute__((swift_name("get(key_:)")));
@property (readonly) NSDictionary<CommonKodein_di_coreKodeinKey *, NSArray<CommonKodein_di_coreKodeinDefinition *> *> *bindings __attribute__((swift_name("bindings")));
@property (readonly) NSArray<id<CommonKodein_di_coreExternalSource>> *externalSources __attribute__((swift_name("externalSources")));
@property (readonly) NSArray<id<CommonKodein_di_coreContextTranslator>> *registeredTranslators __attribute__((swift_name("registeredTranslators")));
@end;

__attribute__((swift_name("Kodein_di_coreTypeToken")))
@protocol CommonKodein_di_coreTypeToken
@required
- (void)checkIsReifiedDisp:(id)disp __attribute__((swift_name("checkIsReified(disp:)")));
- (NSString *)fullDispString __attribute__((swift_name("fullDispString()")));
- (NSString *)fullErasedDispString __attribute__((swift_name("fullErasedDispString()")));
- (CommonKotlinArray *)getGenericParameters __attribute__((swift_name("getGenericParameters()")));
- (id<CommonKodein_di_coreTypeToken> _Nullable)getRaw __attribute__((swift_name("getRaw()")));
- (NSArray<id<CommonKodein_di_coreTypeToken>> *)getSuper __attribute__((swift_name("getSuper()")));
- (BOOL)isAssignableFromTypeToken:(id<CommonKodein_di_coreTypeToken>)typeToken __attribute__((swift_name("isAssignableFrom(typeToken:)")));
- (BOOL)isGeneric __attribute__((swift_name("isGeneric()")));
- (BOOL)isWildcard __attribute__((swift_name("isWildcard()")));
- (NSString *)simpleDispString __attribute__((swift_name("simpleDispString()")));
- (NSString *)simpleErasedDispString __attribute__((swift_name("simpleErasedDispString()")));
@end;

__attribute__((swift_name("KotlinLazy")))
@protocol CommonKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface CommonKotlinByteIterator : KotlinBase <CommonKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CommonByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModuleCollector")))
@protocol CommonKotlinx_serialization_runtimeSerialModuleCollector
@required
- (void)contextualKClass:(id<CommonKotlinKClass>)kClass serializer:(id<CommonKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<CommonKotlinKClass>)baseClass actualClass:(id<CommonKotlinKClass>)actualClass actualSerializer:(id<CommonKotlinx_serialization_runtimeKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol CommonKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol CommonKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol CommonKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol CommonKotlinKClass <CommonKotlinKDeclarationContainer, CommonKotlinKAnnotatedElement, CommonKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinTriple")))
@interface CommonKotlinTriple : KotlinBase
- (instancetype)initWithFirst:(id _Nullable)first second:(id _Nullable)second third:(id _Nullable)third __attribute__((swift_name("init(first:second:third:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (CommonKotlinTriple *)doCopyFirst:(id _Nullable)first second:(id _Nullable)second third:(id _Nullable)third __attribute__((swift_name("doCopy(first:second:third:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) id _Nullable first __attribute__((swift_name("first")));
@property (readonly) id _Nullable second __attribute__((swift_name("second")));
@property (readonly) id _Nullable third __attribute__((swift_name("third")));
@end;

__attribute__((swift_name("Kodein_di_coreSearchSpecs")))
@interface CommonKodein_di_coreSearchSpecs : KotlinBase
- (instancetype)initWithContextType:(id<CommonKodein_di_coreTypeToken> _Nullable)contextType argType:(id<CommonKodein_di_coreTypeToken> _Nullable)argType type:(id<CommonKodein_di_coreTypeToken> _Nullable)type tag:(id _Nullable)tag __attribute__((swift_name("init(contextType:argType:type:tag:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property id<CommonKodein_di_coreTypeToken> _Nullable argType __attribute__((swift_name("argType")));
@property id<CommonKodein_di_coreTypeToken> _Nullable contextType __attribute__((swift_name("contextType")));
@property id _Nullable tag __attribute__((swift_name("tag")));
@property id<CommonKodein_di_coreTypeToken> _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Kodein_di_coreKodeinDefining")))
@interface CommonKodein_di_coreKodeinDefining : KotlinBase
- (instancetype)initWithBinding:(id<CommonKodein_di_coreKodeinBinding>)binding fromModule:(NSString * _Nullable)fromModule __attribute__((swift_name("init(binding:fromModule:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<CommonKodein_di_coreKodeinBinding> binding __attribute__((swift_name("binding")));
@property (readonly) NSString * _Nullable fromModule __attribute__((swift_name("fromModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_di_coreKodeinDefinition")))
@interface CommonKodein_di_coreKodeinDefinition : CommonKodein_di_coreKodeinDefining
- (instancetype)initWithBinding:(id<CommonKodein_di_coreKodeinBinding>)binding fromModule:(NSString * _Nullable)fromModule tree:(id<CommonKodein_di_coreKodeinTree>)tree __attribute__((swift_name("init(binding:fromModule:tree:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBinding:(id<CommonKodein_di_coreKodeinBinding>)binding fromModule:(NSString * _Nullable)fromModule __attribute__((swift_name("init(binding:fromModule:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) id<CommonKodein_di_coreKodeinTree> tree __attribute__((swift_name("tree")));
@end;

__attribute__((swift_name("Kodein_di_coreExternalSource")))
@protocol CommonKodein_di_coreExternalSource
@required
- (id (^ _Nullable)(id _Nullable))getFactoryKodein:(id<CommonKodein_di_coreBindingKodein>)kodein key:(CommonKodein_di_coreKodeinKey *)key __attribute__((swift_name("getFactory(kodein:key:)")));
@end;

__attribute__((swift_name("Kodein_di_coreContextTranslator")))
@protocol CommonKodein_di_coreContextTranslator
@required
- (id _Nullable)translateCtx:(id _Nullable)ctx __attribute__((swift_name("translate(ctx:)")));
@property (readonly) id<CommonKodein_di_coreTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) id<CommonKodein_di_coreTypeToken> scopeType __attribute__((swift_name("scopeType")));
@end;

__attribute__((swift_name("Kodein_di_coreBinding")))
@protocol CommonKodein_di_coreBinding
@required
- (id (^)(id _Nullable))getFactoryKodein:(id<CommonKodein_di_coreBindingKodein>)kodein key_:(CommonKodein_di_coreKodeinKey *)key __attribute__((swift_name("getFactory(kodein:key_:)")));
@end;

__attribute__((swift_name("Kodein_di_coreKodeinBinding")))
@protocol CommonKodein_di_coreKodeinBinding <CommonKodein_di_coreBinding>
@required
- (NSString *)factoryFullName __attribute__((swift_name("factoryFullName()")));
- (NSString *)factoryName __attribute__((swift_name("factoryName()")));
@property (readonly) id<CommonKodein_di_coreTypeToken> argType __attribute__((swift_name("argType")));
@property (readonly) id<CommonKodein_di_coreTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) id<CommonKodein_di_coreKodeinBindingCopier> _Nullable copier __attribute__((swift_name("copier")));
@property (readonly) id<CommonKodein_di_coreTypeToken> createdType __attribute__((swift_name("createdType")));
@property (readonly, getter=description_) NSString *description __attribute__((swift_name("description")));
@property (readonly) NSString *fullDescription __attribute__((swift_name("fullDescription")));
@property (readonly) id<CommonKodein_di_coreScope> _Nullable scope __attribute__((swift_name("scope")));
@property (readonly) BOOL supportSubTypes __attribute__((swift_name("supportSubTypes")));
@end;

__attribute__((swift_name("Kodein_di_coreDKodeinAware")))
@protocol CommonKodein_di_coreDKodeinAware
@required
@property (readonly) id<CommonKodein_di_coreDKodein> dkodein __attribute__((swift_name("dkodein")));
@end;

__attribute__((swift_name("Kodein_di_coreDKodeinBase")))
@protocol CommonKodein_di_coreDKodeinBase <CommonKodein_di_coreDKodeinAware>
@required
- (id (^)(id _Nullable))FactoryArgType:(id<CommonKodein_di_coreTypeToken>)argType type:(id<CommonKodein_di_coreTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("Factory(argType:type:tag:)")));
- (id (^ _Nullable)(id _Nullable))FactoryOrNullArgType:(id<CommonKodein_di_coreTypeToken>)argType type:(id<CommonKodein_di_coreTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("FactoryOrNull(argType:type:tag:)")));
- (id)InstanceType:(id<CommonKodein_di_coreTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("Instance(type:tag:)")));
- (id)InstanceArgType:(id<CommonKodein_di_coreTypeToken>)argType type:(id<CommonKodein_di_coreTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable)arg __attribute__((swift_name("Instance(argType:type:tag:arg:)")));
- (id _Nullable)InstanceOrNullType:(id<CommonKodein_di_coreTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("InstanceOrNull(type:tag:)")));
- (id _Nullable)InstanceOrNullArgType:(id<CommonKodein_di_coreTypeToken>)argType type:(id<CommonKodein_di_coreTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable)arg __attribute__((swift_name("InstanceOrNull(argType:type:tag:arg:)")));
- (id<CommonKodein_di_coreDKodein>)OnContext:(id<CommonKodein_di_coreKodeinContext>)context __attribute__((swift_name("On(context:)")));
- (id (^)(void))ProviderType:(id<CommonKodein_di_coreTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("Provider(type:tag:)")));
- (id (^)(void))ProviderArgType:(id<CommonKodein_di_coreTypeToken>)argType type:(id<CommonKodein_di_coreTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable (^)(void))arg __attribute__((swift_name("Provider(argType:type:tag:arg:)")));
- (id (^ _Nullable)(void))ProviderOrNullType:(id<CommonKodein_di_coreTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("ProviderOrNull(type:tag:)")));
- (id (^ _Nullable)(void))ProviderOrNullArgType:(id<CommonKodein_di_coreTypeToken>)argType type:(id<CommonKodein_di_coreTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable (^)(void))arg __attribute__((swift_name("ProviderOrNull(argType:type:tag:arg:)")));
@property (readonly) id<CommonKodein_di_coreKodeinContainer> container __attribute__((swift_name("container")));
@property (readonly) id<CommonKodein_di_coreKodein> kodein __attribute__((swift_name("kodein")));
@property (readonly) id<CommonKodein_di_coreKodein> lazy __attribute__((swift_name("lazy")));
@end;

__attribute__((swift_name("Kodein_di_coreDKodein")))
@protocol CommonKodein_di_coreDKodein <CommonKodein_di_coreDKodeinBase>
@required
@end;

__attribute__((swift_name("Kodein_di_coreWithContext")))
@protocol CommonKodein_di_coreWithContext
@required
@property (readonly) id _Nullable context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kodein_di_coreSimpleBindingKodein")))
@protocol CommonKodein_di_coreSimpleBindingKodein <CommonKodein_di_coreDKodein, CommonKodein_di_coreWithContext>
@required
- (id (^)(id _Nullable))overriddenFactory __attribute__((swift_name("overriddenFactory()")));
- (id (^ _Nullable)(id _Nullable))overriddenFactoryOrNull __attribute__((swift_name("overriddenFactoryOrNull()")));
@end;

__attribute__((swift_name("Kodein_di_coreBindingKodein")))
@protocol CommonKodein_di_coreBindingKodein <CommonKodein_di_coreSimpleBindingKodein>
@required
@end;

__attribute__((swift_name("Kodein_di_coreKodeinBindingCopier")))
@protocol CommonKodein_di_coreKodeinBindingCopier
@required
- (id<CommonKodein_di_coreKodeinBinding>)doCopyBuilder:(id<CommonKodein_di_coreKodeinContainerBuilder>)builder __attribute__((swift_name("doCopy(builder:)")));
@end;

__attribute__((swift_name("Kodein_di_coreScope")))
@protocol CommonKodein_di_coreScope
@required
- (CommonKodein_di_coreScopeRegistry *)getRegistryContext:(id _Nullable)context __attribute__((swift_name("getRegistry(context:)")));
@end;

__attribute__((swift_name("Kodein_di_coreKodeinContainerBuilder")))
@protocol CommonKodein_di_coreKodeinContainerBuilder
@required
- (void)bindKey:(CommonKodein_di_coreKodeinKey *)key binding:(id<CommonKodein_di_coreKodeinBinding>)binding fromModule:(NSString * _Nullable)fromModule overrides:(CommonBoolean * _Nullable)overrides __attribute__((swift_name("bind(key:binding:fromModule:overrides:)")));
- (void)extendContainer:(id<CommonKodein_di_coreKodeinContainer>)container allowOverride:(BOOL)allowOverride copy:(NSSet<CommonKodein_di_coreKodeinKey *> *)copy __attribute__((swift_name("extend(container:allowOverride:copy:)")));
- (void)onReadyCb:(void (^)(id<CommonKodein_di_coreDKodein>))cb __attribute__((swift_name("onReady(cb:)")));
- (void)registerContextTranslatorTranslator:(id<CommonKodein_di_coreContextTranslator>)translator __attribute__((swift_name("registerContextTranslator(translator:)")));
- (id<CommonKodein_di_coreKodeinContainerBuilder>)subBuilderAllowOverride:(BOOL)allowOverride silentOverride:(BOOL)silentOverride __attribute__((swift_name("subBuilder(allowOverride:silentOverride:)")));
@end;

__attribute__((swift_name("Kodein_di_coreScopeCloseable")))
@protocol CommonKodein_di_coreScopeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Kodein_di_coreScopeRegistry")))
@interface CommonKodein_di_coreScopeRegistry : KotlinBase <CommonKodein_di_coreScopeCloseable>
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (id)getOrCreateKey:(id)key sync:(BOOL)sync creator:(CommonKodein_di_coreReference *(^)(void))creator __attribute__((swift_name("getOrCreate(key:sync:creator:)")));
- (id _Nullable (^ _Nullable)(void))getOrNullKey:(id)key __attribute__((swift_name("getOrNull(key:)")));
- (void)removeKey:(id)key __attribute__((swift_name("remove(key:)")));
- (id)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_di_coreReference")))
@interface CommonKodein_di_coreReference : KotlinBase
- (instancetype)initWithCurrent:(id)current next:(id _Nullable (^)(void))next __attribute__((swift_name("init(current:next:)"))) __attribute__((objc_designated_initializer));
- (id)component1 __attribute__((swift_name("component1()")));
- (id _Nullable (^)(void))component2 __attribute__((swift_name("component2()")));
- (CommonKodein_di_coreReference *)doCopyCurrent:(id)current next:(id _Nullable (^)(void))next __attribute__((swift_name("doCopy(current:next:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id current __attribute__((swift_name("current")));
@property (readonly) id _Nullable (^next)(void) __attribute__((swift_name("next")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
