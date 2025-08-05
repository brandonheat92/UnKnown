// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class UnknownEditorTarget : TargetRules
{
	public UnknownEditorTarget(TargetInfo Target) : base(Target)
	{
		bOverrideBuildEnvironment = true;
        Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("Unknown");
	}
}
