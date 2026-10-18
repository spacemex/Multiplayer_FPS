using UnrealBuildTool;

public class MultiplayerFPSCore : ModuleRules
{
	public MultiplayerFPSCore(ReadOnlyTargetRules target) : base(target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			["Core", "CoreUObject", "Engine", "GameplayTags"]
		);

		PrivateDependencyModuleNames.AddRange([]);
	}
}